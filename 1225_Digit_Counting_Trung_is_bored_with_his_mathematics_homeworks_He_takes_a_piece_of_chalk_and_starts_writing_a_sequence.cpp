#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    string x = "";
    int arr[10] = {0};
    for (int i = 1; i <= n; ++i)
    {
        x += to_string(i);
    }
    for (int i = 0; i < x.size(); ++i)
    {
        arr[x[i] - '0']++;
    }
    for (int i = 0; i < 9; ++i)
        cout << arr[i] << " ";
    cout << arr[9];
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