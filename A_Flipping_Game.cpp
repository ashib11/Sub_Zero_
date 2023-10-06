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
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = 0;
    int s=0, e=0;
    for (int i = 0; i < n; ++i)
    {

        for (int j = i; j < n; ++j)
        {
            int x = 0;
            for (int k = i; k <= j; ++k)
            {
                if (v[k] == 0)
                {
                    x++;
                }
                else
                    x--;
            }
            if (sum < x)
            {
                sum = x;
                s = i;
                e = j;
            }
        }
    }
    // cout << s << " " << e << endl;
    ll ans = 0;

    for (int i = s; i <= e; ++i)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
        }
        else
            v[i] = 0;
    }
    for (int i = 0; i < n; ++i)
    {
        // cout << v[i] << " ";
        ans += v[i];
    }
    // cout << endl;
    cout << ans << endl;
    return 0;
}