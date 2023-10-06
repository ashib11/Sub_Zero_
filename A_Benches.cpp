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
    cin >> n >> m;
    vector<int> v(n);
    int y = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (y < v[i])
            y = v[i];
    }

    int s = y + m;
    for (int i = 0; i < m; ++i)
    {
        sort(v.begin(), v.end());
        v[0]++;
    }
    sort(v.begin(), v.end());
    cout << v[n - 1] << " " << s << endl;
    return 0;
}