#include <iostream>
using namespace std;

long long fib(long long n){
    if(n<2) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    long long n;
    cin >> n;
    long long resposta = fib(n);
    cout << "Fib(" << n << ") = " << resposta << endl;
}