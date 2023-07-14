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
    int n, m;
    cin >> n;
    vector<int> b(101, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    cin >> m;
    vector<int> g(m, 0);
    for (int i = 0; i < m; ++i)
    {
        cin >> g[i];
    }
    sort(g.begin(), g.end());
    int sum = 0;
    for (int i = 0; i < m; ++i)
    {
        int x = g[i];
        if ((b[x - 1] > 0))
        {
            b[x - 1]--;
            sum++;
        }
        else if (b[x] > 0)
        {
            b[x]--;
            sum++;
        }

        else if (b[x + 1] > 0)
        {
            b[x + 1]--;
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}