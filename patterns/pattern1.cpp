/*

  1
 232
34543

*/

#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++){
	    for(j=n-1-i;j>=0;j--){
	        cout<<" ";
	    }
	    j=(2*i)-1;
	    k=i;
	    while(k<=j){
	        cout<<k;
	        k++;
	    }
	    k-=2;
	    while(k>=i){
	        cout<<k;
	        k--;
	    }
	    cout<<endl;
	}
	return 0;
}
