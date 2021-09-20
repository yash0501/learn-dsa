// Given two arrays A and B of sizes N and M respectively. You need to choose exactly K elements from these arrays such that their sum is maximum and you need to choose at least one element from each array.

// Input Format:
// First line contains three integers, N , M , and K.
// Next line contains N space separated integers denoting array A.
// Next line contains M space separated integers denoting array B.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> A(N);
    vector<int> B(M);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += A[i] + B[j];
            count++;
            if (sum > K) {
                sum -= A[i] + B[j];
                count--;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}

