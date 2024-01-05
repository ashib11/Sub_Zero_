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
    string a;
    cin >> a;
    int n = a.size();
    int pos;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] != '0')
        {
            pos = i;
            break; 
        }
    }
    string x = a.substr(0, pos);
    string y = a.substr(pos, (n - pos));
    int num1 = stoi(x);
    int num2 = stoi(y); 
    if(num1 >=num2){
        cout << -1 << endl; 
    }
    else 
    cout << x << " " << y << endl;
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
