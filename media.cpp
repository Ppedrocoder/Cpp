#include <iostream>
using namespace std;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    string result= "NO";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a[i]+a[j]==s){
                    result="YES";                  
                }
            }
        }
    }
    cout << result;
}