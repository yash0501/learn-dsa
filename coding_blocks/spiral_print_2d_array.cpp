#include <iostream>
#include<string>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
	int a[m][n];
	int i,j,k;
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	
	int sr=0,er=m-1,sc=0,ec=n-1;
	while(sr<=er && sc<=ec){
	    for(i=sc;i<=ec;i++){
	        cout<<a[sr][i]<<" ";
	    }
	    sr++;
	    if(sr>er){
	        break;
	    }
	    for(i=sr;i<=er;i++){
	        cout<<a[i][ec]<<" ";
	    }
	    ec--;
	    if(ec<sc){
	        break;
	    }
	    for(i=ec;i>=sc;i--){
	        cout<<a[er][i]<<" ";
	    }
	    er--;
	    if(er<sr){
	        break;
	    }
	    for(i=er;i>=sr;i--){
	        cout<<a[i][sc]<<" ";
	    }
	    sc++;
	}
	
	return 0;
}
