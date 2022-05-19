// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long int ans=-1;
    long long int l=1, r=x, m;
    while(l<=r){
        m=l+(r-l)/2;
        long long int sq=m*m;
        if(sq==x){
            return m;
        }
        else if(sq>x){
            r=m-1;
        }
        else{
            l=m+1;
            ans=m;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends
