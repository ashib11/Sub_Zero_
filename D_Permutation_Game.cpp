#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;

        vector<int> p(n), a(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Compute the final positions after 'k' turns
        vector<int> final_positions(n);
        for (int i = 0; i < n; ++i) {
            int pos = i, turns = k;
            while (turns--) {
                pos = p[pos] - 1;
            }
            final_positions[i] = pos + 1;
        }

        // Calculate scores
        long long score_b = 0, score_s = 0;
        for (int i = 0; i < n; ++i) {
            score_b += a[final_positions[i] - 1];
            score_s += a[final_positions[i] - 1];
        }

        // Determine the winner
        if (score_b > score_s) {
            cout << "Bodya" << endl;
        } else if (score_s > score_b) {
            cout << "Sasha" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
