#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> arr(n + 1, 0);

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            arr[i + 1] = arr[i] + 1;
        }
        else
        {
            arr[i + 1] = arr[i];
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = arr[r] - arr[l];
        cout << ans << endl;
    }
}

int main()
{
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
