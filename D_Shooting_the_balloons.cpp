#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int countSubarrays(const vector<int>& arr, int x) {
    int count = 0;
    int total = 0;
    for (int num : arr) {
        total += num;
        if (total >= x) {
            count++;
            total = 0;
        }
    }
    return count;
}

int kthSmallestContiguousSum(const vector<int>& balloons, int k) {
    int left = *min_element(balloons.begin(), balloons.end());
    int right = accumulate(balloons.begin(), balloons.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (countSubarrays(balloons, mid) >= k) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> balloons(n);
    for (int i = 0; i < n; ++i) {
        cin >> balloons[i];
    }

    cout << kthSmallestContiguousSum(balloons, k) << endl;

    return 0;
}
