#include <iostream>
#include <algorithm>
#include <numbers>
using namespace std;



bool lab(int matriz[20][20], int linha, int coluna, int l, int c){
    if (l == -1 || c == -1 || l == linha || c == coluna || matriz[l][c] != 0)
    {
        return false;
    }
    
    if(l==linha-1 && c==coluna-1){
        return true;
    }
    matriz[l][c] = 9;

    bool ans = lab(matriz, linha, coluna, l+1, c) || lab(matriz, linha, coluna, l, c+1) || lab(matriz, linha, coluna, l, c-1)
               || lab(matriz, linha, coluna, l-1, c);
    
    matriz[l][c] = 0;
    return ans;
}

int main(){
    int linha, coluna; cin >> linha >> coluna;
    int matriz[20][20];
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz[i][j];
        }
        
    }
    bool resposta = lab(matriz, linha, coluna, 0, 0);
    cout << resposta;
}