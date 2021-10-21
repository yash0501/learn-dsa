// https://www.pepcoding.com/resources/online-java-foundation/getting-started/complex_queries/ojquestion

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,i,j;
	//cout<<"input n:";
	cin>>n;
	int arr[n];
	//cout<<"input array:"
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	int q;
	cin>>q;
	for(i=0;i<q;i++){
	    int type;
	    cin>>type;
	    //cout<<"type   ";
	    if(type==0){
	        //cout<<"yes  ";
	        int l,r;
	        cin>>l>>r;
	        float p=0.0;
	        for(j=l;j<=r;j++){
	            p=p+(cos(arr[j])+sin(arr[j]));
	        }
	        int k=floor(p);
	        cout<<k<<endl;
	    }
	    else if(type==1){
	        int l,r,d;
	        cin>>l>>r>>d;
	        for(j=l;j<=r;j++){
	            arr[j]+=d;
	        }
	    }
	}
	return 0;
}
