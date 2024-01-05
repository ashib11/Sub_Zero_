#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (gcd)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the rank of a/b in the set of fractions
int findRank(int n, int a, int b) {
    int rank = 0;
    for (int denominator = 1; denominator <= n; ++denominator) {
        for (int numerator = 0; numerator <= denominator; ++numerator) {
            if (gcd(numerator, denominator) == 1) {
                rank++;
                if (numerator == a && denominator == b) {
                    return rank;
                }
            }
        }
    }
    return -1; // It should never reach here
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int result = findRank(n, a, b);
        cout << result << endl;
    }

    return 0;
}
