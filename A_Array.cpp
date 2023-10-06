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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> neg, pos;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            neg.push_back(v[i]);
        }
        else if (v[i] > 0)
            pos.push_back(v[i]);
    }
    if (pos.size() == 0)
    {
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back(); 
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back(); 
    }
    cout << "1 " << neg[0] << endl;
    cout << pos.size() << " ";
    for (auto it : pos)
        cout << it << " ";
    cout << endl;
    cout << neg.size() << " " << 0 << " ";
    for (int i = 1; i < neg.size(); ++i)
        cout << neg[i] << " ";
    cout << endl;
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