#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    long long soma=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        soma+=a[i];
    }
    double media= static_cast<double>(soma)/n;
    int acima=0;
    int abaixo=0;
    for(int i=0; i<n; i++){
        if(a[i]>=media){
            acima++;
        }
        else{
            abaixo++;
        }
    }
    cout << fixed << setprecision(1) << media << endl;
    cout << abaixo << endl;
    cout << acima << endl;
}