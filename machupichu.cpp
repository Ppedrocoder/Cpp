#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int machupichu(int matriz[20][20], int linha, int coluna, int l, int c){
    if (l==0)
    {
        return matriz[l][c];
    }
    if (l>linha || l<0 || c>coluna || c<0)
    {
        return 0;
    }
    matriz[l][c] = 9;
    int menor = matriz[l][c] + min({machupichu(matriz, linha, coluna, l-1,c-1), machupichu(matriz, linha, coluna, l-1, c), machupichu(matriz, linha, coluna, l-1, c+1)});
    matriz[l][c] = 0;
    return menor;
}

int main(){
    int linha, coluna;  cin >> linha >> coluna;
    int matriz[20][20];
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz[i][j];
        }
        
    }
    int resposta = 1000000000;
    for (int i=0 ; i<coluna ; ++i)
        resposta = min(resposta, machupichu(matriz, linha, coluna, linha-1, coluna-1));
    cout << resposta << "\n";
    return 0;
}