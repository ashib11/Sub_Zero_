#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
    }

    int m;
    cin >> m;
    vector<string> v1(m);
    for (auto &i : v1)
        cin >> i;

    for (auto it : v1)
    {
        map<char, int> mp1; 
        map<int, int> mp2;  
        if (it.size() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        bool isValid = true;
        unordered_map<char, int> yo; 
        unordered_map<int, char> yo1; 

        for (int i = 0; i < n; ++i)
        {
            char crch = it[i];
            int curn = v[i];

            if (yo.count(crch))
            {
                if (yo[crch] != curn)
                {
                    isValid = false;
                    break;
                }
            }
            else
            {
                yo[crch] = curn;
            }

            if (yo1.count(curn))
            {
                if (yo1[curn] != crch)
                {
                    isValid = false;
                    break;
                }
            }
            else
            {
                yo1[curn] = crch;
            }
        }

        if (isValid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
