#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    string a;
    cin >> a;
    map<string, int> mp;
    for (int i = 0; i < a.size(); ++i)
    {
        if(i+2<=a.size())
        mp[a.substr(i, 2)]++;
    }
    int mx = 0;
    string ans = ""; 
    for (auto it : mp)
    {
        if (mx < it.second)
        {
            mx = it.second;
            ans = it.first; 
        }
    }
    cout << ans << endl; 
    return 0;
}