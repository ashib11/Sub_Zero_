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
const int N = 3e3 + 10;
vector<bool> chck(N);
vector<ll> alPrime;
set<int> st[N];
vector<int> pre(N);
void seive()
{
    alPrime.push_back(2);
    for (int i = 3; i * i < N; i += 2)
    {
        if (chck[i] == false)
        {
            alPrime.push_back(i);
            for (int j = i * i; j <= N; j += (i + i))
            {
                chck[j] = true;
            }
        }
    }
}
void preCal()
{

    for (int i = 4; i < N; ++i)
    {
        ll num = i;
        for (auto it : alPrime)
        {
            if (num % it == 0)
            {
                st[i].insert(it);
                while (num % it == 0)
                {
                    num /= it;
                }
            }
        }
        if (num > 1)
            st[i].insert(num);
    }
    for (int i = 4; i < N; ++i)
    {
        pre[i] = pre[i - 1];
        if (st[i].size() == 2)
            pre[i]++;
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << pre[n] << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    seive();
    preCal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
