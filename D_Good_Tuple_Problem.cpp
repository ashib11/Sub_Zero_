#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);

    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    unordered_set<int> X;

    for (int i = 0; i < M; i++) {
        // Check if both A[i] and B[i] are in X
        if (X.find(A[i]) != X.end() && X.find(B[i]) != X.end()) {
            cout << "Yes" << endl;
            return 0;
        }

        // Add A[i] and B[i] to X
        X.insert(A[i]);
        X.insert(B[i]);
    }

    cout << "No" << endl;

    return 0;
}
