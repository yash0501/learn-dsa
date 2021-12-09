#include <iostream>
#include<string>
using namespace std;

int main() {
    int m,n,k,s;
    cin>>m>>n>>k>>s;
	char a[m][n];
	int i,j;
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        if(s<k){
	            break;
	        }
	        
	        if(a[i][j]=='.'){
	            s=s-2;
	            //cout<<" d ";
	        }
	        else if(a[i][j]=='*'){
	            s=s+5;
	            //cout<<" i ";
	        }
	        else if(a[i][j]=='#'){
	            //cout<<" s ";
	            break;
	        }
	        if(j!=n-1){
	            s--;
	        }
	    }
	    if(s<k){
	        cout<<"No Strength";
	        break;
	    }
	}
	if(s>=k){
	    cout<<"Went out ";
	    cout<<s;
	}
	return 0;
}
