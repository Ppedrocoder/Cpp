#include <iostream>
#include <iomanip>
#include <vector>
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
    vector<int> b[n];
    vector<int> c[n];
    for(int i=0; i<n; i++){
        if(a[i]>=media){
            acima++;
            b->push_back(a[i]);
        }
        else{
            abaixo++;
            c->push_back(a[i]);
        }
    }
    cout << fixed << setprecision(1) << media << endl;
    cout << abaixo << " ";
    for (int i = 0; i < abaixo; i++)
    {
        if(i==abaixo-1){
            cout << c->at(i) << endl;
            break;
        }
        cout << c->at(i) << " ";
    }
    
    cout << acima << " ";
    for (int i = 0; i < acima; i++)
    {
        if(i==acima-1){
            cout << b->at(i) << endl;
            break;
        }
        cout << b->at(i) << " ";
    }
}