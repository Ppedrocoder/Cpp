#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    double a[n];
    double soma=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        soma+=a[i];
    }
    double media= soma/n;
    int acima=0;
    int abaixo=0;
    for(double num : a){
        if(num>=media){
            acima+=1;
        }
        else{
            abaixo+=1;
        }
    }
    cout << fixed << setprecision(1) << media << endl;
    cout << abaixo << endl;
    cout << acima << endl;
}