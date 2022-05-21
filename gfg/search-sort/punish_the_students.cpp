// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        // your code here
        int i,j,t,s=0;
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(roll[j]>roll[j+1]){
                    s++;
                }
            }
        }
        long long int sum=0;
        for(i=0;i<n;i++){
            sum+=marks[i];
        }
        sum-=s;
        double ans = float(sum)/n;
        if(ans>=avg){
            return 1;
        }
        return 0;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}
  // } Driver Code Ends
