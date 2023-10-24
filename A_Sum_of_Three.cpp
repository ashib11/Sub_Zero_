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
// find_by_key();
// value_by_key();
void solve()
{
    int n;
    cin >> n;

    int a, b, c;
    a = n / 3;
    b = n / 3;
    c = n / 3 + n % 3;
    if (a % 3 == 0 && b % 3 == 0 && c == 0 || (a <= 3 && b <= 3 && c <= 3))
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        a = a-2; 
        c = c+2; 
        if(c%3==0){
            c--; 
            b++; 
        }
        if(b%3==0){
            b--; 
            a++; 
        }
        cout << "YES" << endl;
        cout << a  << " " << b << " " << c << endl;
    }
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
