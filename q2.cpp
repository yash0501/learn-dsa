// There is a matrix of squares with N horizontal rows and M vertical columns. The square at the i-th row and the j-th column from the left is represented as (i, j). Each square is black or white. The color of the square is given as an N-by-M matrix A(i, j). If A(i, j) is "." the square (i, j) is white, if A(i, j) is "#" the square (i, j) is black.

// Arun is compressing this matrix. He will do so by repeatedly performing the following operation while there is a row or column that consists only of white squares:
// • choose any one row or column that consists only of white squares, remove it and delete the space between the rows or columns.
// It is shown that the final state of the matrix is uniquely determined regardless what row or column is chosen in each operation. Find the final state of the matrix.

// Input Format
// The first line contains two space-separated integers, N and M.
// The N following lines each contain M characters, where each character is either a "#" or a ".".
// • 1<=N,M<=100
// • Each character is either "#" or "."
// • There is at least one black square.

// Output Format
// Print p line following each containing q characters denoting the new matrix A, where p and q are the number of rows and columns respectively after the operations.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <functional>
#include <bitset>
#include <unordered_map>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> A(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        A[i] = s;
    }
    int i, j;
    int count = 0;
    while(true){
        bool flag = false;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(A[i][j] == '.'){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) break;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(A[i][j] == '.'){
                    A[i][j] = '#';
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}