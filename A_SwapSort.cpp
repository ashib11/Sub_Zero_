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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; ++i)
    {
        int k = i;
        for (int j = i; j < n; ++j)
        {
            if (v[k] > v[j])
            {
                 k = j;
            }
        }
        ans.push_back({i, k});
        swap(v[i],v[k]); 
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}