// Find the nth fibonacci number

#include<iostream>
using namespace std;

int main(){
    int num, fib=0, i, a=0, b=1;
    cin>>num;
    for(i=3;i<=num;i++){
        fib += a + b;
        a = b;
        b = fib;
    }
    cout<<fib;
    return 0;
}