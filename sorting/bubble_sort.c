#include <stdio.h>

int main() {
	//code
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	int a=n,t;
	while(n){
	    for(i=0;i<n;i++){
	        if(arr[i]>arr[i+1]){
	            t=arr[i];
	            arr[i]=arr[i+1];
	            arr[i+1]=t;
	        }
	    }
	    n--;
	}
	for(i=0;i<a;i++){
	    printf("%d ",arr[i]);
	}
	return 0;
}
