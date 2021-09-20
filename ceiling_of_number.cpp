// Find the smallest number greater than the target number in a sorted array

#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,6,7,9,11,34,56,67,89};
    int target=12;
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
    return arr[l];
    return 0;
}