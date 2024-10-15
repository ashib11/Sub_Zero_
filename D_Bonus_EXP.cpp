#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // dp[i][0] - maximum experience if we skip the i-th monster
    // dp[i][1] - maximum experience if we defeat the i-th monster
    vector<vector<long long>> dp(N, vector<long long>(2, 0));

    // Base cases
    dp[0][0] = 0;          // If we skip the first monster
    dp[0][1] = A[0];       // If we defeat the first monster

    for (int i = 1; i < N; ++i) {
        // If we skip the current monster
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        
        // If we defeat the current monster
        if (i % 2 == 0) { // 1st, 3rd, 5th defeated monsters (1-based)
            dp[i][1] = dp[i-1][0] + A[i];
        } else { // 2nd, 4th, 6th defeated monsters (1-based)
            dp[i][1] = dp[i-1][0] + 2 * A[i];
        }
    }

    // The maximum experience points will be the best choice after considering all monsters
    long long result = max(dp[N-1][0], dp[N-1][1]);
    cout << result << endl;

    return 0;
}
