// https://www.pepcoding.com/resources/online-java-foundation/getting-started/inverse-of-a-number-official/ojquestion

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int x=n;
    int l=0;
    while(x){
        x=x/10;
        l++;
    }
    int arr[l+1];
    int i,j,a;
    x=n;
    for(i=1;i<=l;i++){
        a=n%10;
        arr[a]=i;
        n=n/10;
    }
    int ans=0;
    for(i=l;i>=1;i--){
        ans=ans*10+arr[i];
    }
    cout<<ans;
}
