// Here we have to find the smallest positive number which is not present in the array.
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    // Function to find missing integer in array
    // arr: input array
    // n: size of array
    int segregate(int arr[], int n){
        int i,j=0,t;
        for(i=0;i<n;i++){
            if(arr[i]<=0){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                j++;
            }
        }
        return j;
    }
    int findMissingPositive(int arr[], int size){
        int i;
        for(i=0;i<size;i++){
            int x=abs(arr[i]);
            if(x-1<size&&arr[x-1]>0){
                arr[x-1]=-arr[x-1];
            }
        }
        for(i=0;i<size;i++){
            if(arr[i]>0){
                return i+1;
            }
        }
        return size+1;
    }
    int findMissing(int arr[], int n) { 
        // Your code here
        int p=segregate(arr, n);
        findMissingPositive(arr+p, n-p);
    }
};

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        cout<<ob.findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
