// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int k) {
    //code here
    int n=vec.size();
    int l=0, r=n-1, m;
    while(l<=r){
        m=(l+r)/2;
        if(vec[m]==k){
            return m;
        }
        if(vec[m]>=vec[0]){
            if(vec[m]>k&&vec[0]<=k){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        else if(vec[m]<=vec[n-1]){
            if(vec[m]<k&&vec[n-1]>=k){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
    }
    return -1;
}
