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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        int subse = 1;
        int curl = 1;

        for (int i = 1; i < n; ++i)
        {
            if (v[i] - v[i - 1] <= k)
            {
                curl++;
                subse = max(curl, subse);
            }
            else
            {
                curl = 1;
            }
        }

        cout << n - subse << endl;
    }
    return 0;
}