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
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int y = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        y += x;
        v[i] = y;
    }

    int nq;
    cin >> nq;
    for (int i = 0; i < nq; ++i)
    {
        int q;
        cin >> q;
        auto x = lower_bound(v.begin(), v.end(), q) - v.begin();
        cout << x + 1 << endl;
    }
    return 0;
}