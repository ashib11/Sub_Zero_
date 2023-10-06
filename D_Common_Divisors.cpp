#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    string a, b;
    cin >> a >> b;
    int la = a.size();
    int lb = b.size();
    set<int> div;

    for (int i = 1; i <= min(la, lb); ++i)
    {
        if (la % i == 0 && lb % i == 0)
        {
            div.insert(i);
        }
    }

    ll cnt = 0;
    for (auto it : div)
    {
        // cout << it << endl;
        string sub = b.substr(0, it);
        string check = "";
        for (int i = 0; i < (lb/ it); ++i)
            check += sub;
        // cout << check << endl;
        if (check != b)
            continue;
        check = "";
        for (int i = 0; i < (la/it); ++i)
            check += sub;
        // cout << check << endl;
        if (check != a)
            continue;
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}