// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int x=0,y=0,z=0,i;
        for(i=0;i<n;i++){
            if(a[i]==0){
                x++;
            }
            else if(a[i]==1){
                y++;
            }
            else if(a[i]==2){
                z++;
            }
        }
        int k=0;
        i=0;
        while(i<x){
            a[k]=0;
            k++;
            i++;
        }
        i=0;
        while(i<y){
            a[k]=1;
            k++;
            i++;
        }
        i=0;
        while(i<z){
            a[k]=2;
            k++;
            i++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
