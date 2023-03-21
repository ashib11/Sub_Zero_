#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long k = floor((-1 + sqrt(1 + 8 * n)) / 2); // compute k
        cout << k << endl;
    }

    return 0;
}