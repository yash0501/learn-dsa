#include <stdio.h>

void InsertionSort(int arr[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void Print(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
	//code
	int arr[] = {2, 4, 3, 7, 6, 5};
	InsertionSort(arr, 6);
	Print(arr, 6);
	return 0;
}
