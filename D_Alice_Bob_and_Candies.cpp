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
// find_by_order();
// order_of_key();

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int l = 0, r = n - 1, ans = 0, stp = 0, alice = 0, bob = 0, sumA=0, sumB=0;
    while (l <= r)
    {
        if (stp % 2 == 0)
        {
            int sumAlice = 0;
            while (l <= r and sumAlice <= bob)
            {
                sumAlice += v[l++];
            }
            sumA += sumAlice;
            alice = sumAlice;
        }
        else
        {
            int sumBob = 0;
            while (l <= r and sumBob <= alice)
            {
                sumBob += v[r--];
            }
            sumB += sumBob;
            bob = sumBob;
        }
        ++stp;
    }
    cout << stp << " " << sumA << " " << sumB << endl;
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