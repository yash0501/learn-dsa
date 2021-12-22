#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a, a+n);
	int l,r;
	for(i=0;i<n-2;i++){
	    l=i+1;
	    r=n-1;
	    int d=target-a[i];
	    if(d<0){
	        break;
	    }
	    while(l<r){
	        int s1=a[l]+a[r];
	        if(s1==d){
	            cout<<a[i]<<" + "<<a[l]<<" + "<<a[r]<<endl;
	            l++;
	            r--;
	        }
	        else if(s1<d){
	            l++;
	        }
	        else{
	            r--;
	        }
	    }
	}
	return 0;
}
