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
const int N = 1e4;
vector<int> all_prime;
vector<bool> yo(N, false);
void seive()
{
    all_prime.push_back(2);
    for (ll i = 4; i  < N; i += 2)
        yo[i] = true;
    for (ll i = 3; i  < N; i += 2)
    {
        if (yo[i] == false)
            all_prime.push_back(i);
        for (ll j = i * i; j < N; j += (i + i))
        {
            yo[j] = true;
        }
    }

}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << all_prime[i] << ' ';
    }
    cout << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    seive();
    while (tc--)
    {
        solve();
    }
    return 0;
}
