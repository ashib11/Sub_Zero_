#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n, m, k, H, x, count = 0;
    cin >> n >> m >> k >> H;
    int max_diff;
    max_diff = (m - 1) * k;

    for (int j = 0; j < n; j++)
    {
        cin >> x;
        int diff;
        diff = abs(H - x);
        if (diff <= max_diff && diff != 0 && diff % k == 0)
            count++;
    }

    cout << count << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}