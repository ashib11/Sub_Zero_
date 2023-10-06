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
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    bool arr[n] = {false};
    bool check = false;
    for (int i = 0; i < n; ++i)
    {
        int x = *min_element(v.begin() + i, v.end());
        int indx = find(v.begin() + i, v.end(), x) - v.begin();
        for (int j = indx; j > i; --j)
        {

            if (v[j] < v[j - 1] && arr[j] == false)
            {
                swap(v[j], v[j - 1]);
                cnt++;
                arr[j] = true;
            }

            // cout << v[j] << ' ' << v[j - 1] << endl;
            if (cnt == n - 1)
            {
                for (auto it : v)
                    cout << it << " ";
                cout << endl;
                return;
            }
        }
    }

    for (auto it : v)
        cout << it << " ";
    cout << endl;
    return;
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