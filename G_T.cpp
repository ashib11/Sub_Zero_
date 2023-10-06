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
string all = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"};
void solve()
{
    int n, k;
    cin >> n >> k;
    string ne = all.substr(0, n);
    string first = ne;
    for (int i = 0; i < k; ++i)
    {
        cout << ne << endl;
        next_permutation(all(ne));
        if (first == ne)
            break;
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ":\n";
        solve();
    }
    return 0;
}