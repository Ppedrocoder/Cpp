#include <iostream>
using namespace std;
string cabe(int p1, int p2, int a1, int a2, int b1, int b2){
    if (p1>=a1+b1 or p2>=a2+b2)
    {
        return "S";
    }
    else{
        return "N";
    }
}
int main(){
    int p1,p2; cin >> p1 >> p2;
    int a1,a2; cin >> a1 >> a2;
    int b1,b2; cin >> b1 >> b2;
    cout << cabe(p1,p2,a1,a2,b1,b2)<<endl;
}