// Find the greatest number smaller than or equal to the target number in a sorted array.

#include <iostream>
using namespace std;

int floorOfNumber(int arr[], int target){
    int l=0,n=10,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return arr[r];
}

int main(){
    int arr[10] = {2,3,5,7,11,45,67,89,120,876};
    int target=1;
    cout<<floorOfNumber(arr, target);
    return 0;
}