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
    int find;
    cin>>find;
    int flag=0;
    i=0;
    j=n-1;
    while(i<n && j>=0){
        if(a[i][j]==find){
            cout<<"Element found ";
            flag++;
            break;
        }
        else if(a[i][j]<find){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag==0){
        cout<<"Element not found";
    }
	return 0;
}
