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

int main()
{
    fastIO();
    int n;

    while (cin >> n)
    {

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int money;
        cin >> money;
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; ++i)
        {
            int check = *lower_bound((v.begin() + i+1), v.end(), (money - v[i]));; 

            if (v[i] + check == money && check!=0)
            {

                ans.clear();
                ans.push_back({min(check, v[i]), max(v[i], check)});
            }
        }
        cout << "Peter should buy books whose prices are ";
        cout << ans[0].first << " and " << ans[0].second << "." << endl;
        cout << endl;
    }
    return 0;
}