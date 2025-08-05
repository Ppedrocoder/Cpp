#include <iostream>
#include <numeric>
#include <algorithm>
#include <climits>
using namespace std;

int machupichu(int matriz[20][20], int linha, int coluna, int l, int c){
    if (l==0)
    {
        return matriz[l][c];
    }
    if (l>=linha || l<0 || c>=coluna || c<0)
    {
        return INT_MAX;
    }
    return matriz[l][c] + min({machupichu(matriz, linha, coluna, l-1,c-1), machupichu(matriz, linha, coluna, l-1, c), machupichu(matriz, linha, coluna, l-1, c+1)});
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
    int resposta = INT_MAX;
    for (int i=0 ; i<coluna ; ++i){
        int esforco = machupichu(matriz, linha, coluna, linha-1, i);
        if (esforco<resposta)
            resposta = esforco;
    }
    cout << resposta << "\n";
    return 0;
}