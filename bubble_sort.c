#include <stdio.h>

void BubbleSort(int arr[], int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

void Print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main() {
	//code
	int arr[]={2, 6, 5, 3,  8, 1, 9};
	int n=7;
	BubbleSort(arr, n);
	Print(arr, n);
	return 0;
}
