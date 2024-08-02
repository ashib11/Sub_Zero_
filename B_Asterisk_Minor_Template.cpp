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

void solve()
{
    string f, s;
    cin >> f >> s;
    if (f[0] == s[0])
    {
        cout << "YES" << endl; 
        cout << f[0] << '*' << endl;
        return;
    }
    if (f[(int)f.size() - 1] == s[(int)s.size() - 1])
    {
        cout << "YES" << endl; 
        cout << '*' << s[s.size() - 1] << endl;
        return;
    }
    for (int i = 0; i < (int)f.size()-1; ++i)
    {
        string tmp = "";
        tmp += f[i];
        tmp += f[i+1];
        // cout << tmp << endl; 
        if(s.find(tmp)!=s.npos){
            cout << "YES" << endl; 
            cout << '*' << tmp << '*' << endl; 
            return; 
        }
    }
    cout << "NO" << endl; 
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
