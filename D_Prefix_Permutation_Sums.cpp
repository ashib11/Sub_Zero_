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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n-1; ++i)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n-1; ++i)
    {
       cout << abs(v[i - 1] - v[i]) << " ";
    }
   
    cout << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}