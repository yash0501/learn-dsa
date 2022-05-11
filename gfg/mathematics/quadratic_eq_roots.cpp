// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> ans;
        double d=sqrt(b*b - 4*a*c);
        if(b*b < 4*a*c){
            ans.push_back(-1);
        }
        else{
            double a1 = (floor((-b+d)/(2.0*a)));
            double a2 = (floor((-b-d)/(2.0*a)));
            if(a1>a2){
                ans.push_back(a1);
                ans.push_back(a2);
            }
            else{
                ans.push_back(a2);
                ans.push_back(a1);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
