#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,R; cin >> N >> R;
    vector<int> a={};
    for (int i = 0; i < N; i++)
    {
        a.push_back(i);
    }
    for (int i = 0; i < R; i++)
    {
        int retornou; cin >> retornou;
        a.erase(a.begin()+retornou-1);
    }
    if(N-R==0){
        cout << "*";
    }
    else{
        for (int i = 0; i < N-R; i++)
        {
            cout << a[i] << " ";
        }
        
    }
    
}