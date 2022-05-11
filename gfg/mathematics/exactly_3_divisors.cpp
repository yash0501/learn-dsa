// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool prime(int a){
        if(a<2){
            return false;
        }
        if(a==2||a==3){
            return true;
        }
        if(a%2==0||a%3==0){
            return false;
        }
        for(int i=5;i*i<=a;i=i+6){
            if(a%i==0 || a%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        //Your code here
        if(N==1)
            return 0;
        int ans=0;
        for(int i=2; i*i<=N;i++){
            if(prime(i) && i*i<=N)
                ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
