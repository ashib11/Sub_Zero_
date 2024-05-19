#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<ll> div;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
            div.insert(i), div.insert(n / i);
    }
    for (auto it : div)
    {
        int cnt = 0;
        for (int i = 0; i < it; ++i)
        {
            for (int j = i + it; j < n; j += it)
            {
                if (str[i] != str[j])
                    cnt++;
            }
        }
        if (cnt <= 1)
        {
            cout << it << endl;
            return;
        }
        cnt = 0;
        for (int i = n - it; i < n; ++i)
        {
            for (int j = i - it; j >= 0; j -= it)
            {
                if (str[i] != str[j])
                    cnt++;
            }
        }
        if (cnt <= 1)
        {
            cout << it << endl;
            return; 
        }
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
