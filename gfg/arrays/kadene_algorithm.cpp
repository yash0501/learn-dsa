// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long int curr=0, max=0, i, s=arr[0];
        for(i=0;i<n;i++){
            if(s<arr[i]){
                s=arr[i];
            }
            curr+=arr[i];
            if(curr>max){
                max=curr;
            }
            if(curr<0){
                curr=0;
            }
        }
        if(max==0){
            return s;
        }
        return max;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
