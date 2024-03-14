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
const int N = 1e6;
bool seive[N + 1];
void segSeive()
{
    for (int i = 2; i <= N; ++i)
    {
        seive[i] = true;
    }
    for (int i = 2; i * i <= N; ++i)
    {
        if (seive[i])
        {
            for (int j = i * i; i <= N; j += (i + i))
            {
                seive[j] = false;
            }
        }
    }
}
vector<int> generatePrime(int N)
{
    vector<int> v;
    for (int i = 2; i <= N; ++i)
    {
        if (seive[i])
            v.push_back(i);
    }
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    vector<int> prime = generatePrime(sqrt(r));
    vector<int> dum(r - l + 1, 1);
    for (auto it : prime)
    {

        int firstval = (l/i)*i; 
            
        for (int j = max(it * it, firstval); j <= r; j += it){
                dum[j-l] =0;
        }
    }
    for(int i = l ; i <=r ; ++i){
        if(dum[i-l])
            cout << i << ' '; 

    }
    cout << end;   
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
