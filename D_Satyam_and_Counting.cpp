#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Maps to count x-coordinates for y = 0 and y = 1
    map<int, int> x_count_y0, x_count_y1;

    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
        if (y == 0) {
            x_count_y0[x]++;
        } else {
            x_count_y1[x]++;
        }
    }

    // Total triangles count
    long long total_triangles = 0;

    // Calculate the number of triangles
    for (const auto &x_pair : x_count_y0) {
        int x = x_pair.first;
        int count_y0 = x_pair.second;

        // Check if there's a corresponding x coordinate in y1 map
        if (x_count_y1.count(x)) {
            int count_y1 = x_count_y1[x];

            // Total points minus the points on this specific x-coordinate
            long long remaining_points = n - (count_y0 + count_y1);

            // For each pair of points (one with y = 0 and one with y = 1 on this x)
            // we can choose any of the remaining points as the third point
            total_triangles += (long long)(count_y0 * count_y1) * remaining_points;
        }
    }

    // Output the total number of triangles
    cout << total_triangles << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
