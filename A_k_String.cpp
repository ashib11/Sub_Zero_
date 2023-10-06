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
    string a;
    cin >> a;
    int arr[27] = {0};
    for (int i = 0; i < a.size(); ++i)
    {
        arr[a[i] - 'a']++;
    }
    string ans ;
    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] % n != 0)
        {
            cout << "-1" << endl;
            return;
        }
        for (int j = 0; j < arr[i] / n; ++j)
            ans.push_back(i + 'a');
    }
    while(n--) {
        cout << ans ; 
    }
    cout << endl; 
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}