#include <iostream>
using namespace std;

void fun(int a[], int l, int r){
    if(l>=r){
        return;
    }
    int t;
    t=a[l];
    a[l]=a[r];
    a[r]=t;
    fun(a, l+1, r-1);
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	fun(a, 0, n-1);
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
