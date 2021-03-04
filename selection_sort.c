#include <stdio.h>

void SelectionSort(int arr[], int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}

void Print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
	//code
	int arr[]={2, 6, 4,  8, 1, 9, 5, 7};
	int n=8;
	SelectionSort(arr, n);
	Print(arr, n);
	return 0;
}
