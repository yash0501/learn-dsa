#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	int l[n],r[n];
	int max=a[0];
	for(i=0;i<n;i++){
	    if(max<a[i]){
	        max=a[i];
	    }
	    l[i]=max;
	}
	max=a[n-1];
	for(i=n-1;i>=0;i--){
	    if(max<a[i]){
	        max=a[i];
	    }
	    r[i]=max;
	}
	int sum=0,p;
	for(i=1;i<n-1;i++){
	    int left=l[i-1];
	    int right=r[i+1];
	    if(left<=right){
	        p=left-a[i];
	        if(p>0){
	            sum+=p;
	        }
	    }
	    else{
	        p=right-a[i];
	        if(p>0){
	            sum+=p;
	        }
	    }
	}
	cout<<sum;
	return 0;
}
