
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    long long int min_x = abs(k - (k + n - 1));
    for (int i = 1; i < n; i++) {
      long long int x = abs(k + i - (k + i + n - 1));
      if (x < min_x) {
        min_x = x;
      }
    }
    cout << min_x << endl;
  }
  return 0;
}
