#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n];
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int t;
    for(i=0;i<n/2;i++){
        for(j=i;j<n-i-1;j++){
            t=a[i][j];
            a[i][j]=a[j][n-i-1];
            a[j][n-i-1]=a[n-i-1][n-j-1];
            a[n-i-1][n-j-1]=a[n-j-1][i];
            a[n-j-1][i]=t;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
