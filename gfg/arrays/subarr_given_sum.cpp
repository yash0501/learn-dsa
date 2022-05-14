// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long int sum=0;
        int l=0, r=0;
        vector<int> ans;
        while(r<=n){
            if(sum==s){
                //cout<<l<<" "<<r<<endl;
                ans.push_back(l+1);
                ans.push_back(r);
                return ans;
            }
            else if(sum<s){
                sum=sum+arr[r];
                r++;
            }
            else if(sum>s){
                sum=sum-arr[l];
                l++;
            }
        }
        vector<int> a2;
        a2.push_back(-1);
        return a2;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
