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
    unordered_map<string, int> mp;
    unordered_map<int, string> sym;
    string task;
    string kaj;
    int dam;
    while (cin >> task)
    {
        if (task == "clear")
            mp.clear();
        else if (task == "def")
        {
            cin >> kaj >> dam;

            if (!mp.count(kaj))
            {
                mp.insert({kaj, dam});
                sym.insert({dam, kaj});
            }
            else
            {
                mp.erase(kaj);
                sym.erase(dam);
                mp.insert({kaj, dam});
                sym.insert({dam, kaj});
            }
        }
        else if (task == "calc")
        {
            string yo;
            vector<string> v;
            bool jhamela = false;
            int sign = 1;
            int total = 0;
            while (cin >> yo and yo != "=")
            {
                v.push_back(yo);
            }
            for (auto &it : v)
            {
                cout << it << " ";
                if (it == "+")
                    sign = 1;
                else if (it == "-")
                    sign = -1;
                else
                {
                    if (mp.count(it))
                    {
                        total += sign * mp.at(it);
                    }
                    else
                        jhamela = true;
                }
            }
            cout << "= ";
            if (jhamela)
            {
                cout << "unknown" << endl;
            }
            else
            {
                if (sym.count(total))
                {
                    cout << sym[total] << endl;
                }
                else
                {
                    cout << "unknown" << endl;
                }
            }
        }
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
