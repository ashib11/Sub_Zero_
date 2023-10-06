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

int main()
{
    fastIO();
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX;
    int pos;
    vector<int> v(n + 12, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= n - k+1; ++i)
    {
        if (ans > v[i + k - 1] - v[i - 1])
        {
            ans = v[i + k - 1] - v[i - 1];
            pos = i;
        }
    }

    cout << pos  << endl;
    return 0;
}