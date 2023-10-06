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
    vector<int> v;
    vector<bool> arr(n + 10, false);
    for (int i = n; i >= 1; --i)
    {
        if (arr[i] == false)
        {
            v.push_back(i);
            arr[i] = true;
            int k = i;
            while (k % 2 ==0 && arr[k/2] == false)
            {
                k/=2; 
                v.push_back(k);
                arr[k] = true;
            }
        }
    }
    for (auto it : v)
        cout << it << " ";
    cout << endl;
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