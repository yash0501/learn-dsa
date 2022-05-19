// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long int lm=arr[0],rm=arr[n-1];
        long long int l=1, r=n-2, ans=0;
        while(l<=r){
            if(lm<=rm){
                if(arr[l]>lm){
                    lm=arr[l];
                }
                else{
                    ans=ans+(lm-arr[l]);
                }
                l++;
            }
            else{
                if(arr[r]>rm){
                    rm=arr[r];
                }
                else{
                    ans=ans+(rm-arr[r]);
                }
                r--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
