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
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    vector<string> d(m+2);
    vector<int> p(m+2);
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> d[i];
    }
    for (int i = 0; i < m+1; ++i)
    {
        cin >> p[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        bool fl = true;
        for (int j = 0; j < m+1; ++j)
        {
            if (c[i] == d[j])
            {
                sum += p[j + 1];
                fl = false; 
                break; 
            }
        }
        if (fl)
        {
            sum += p[0];
        }
    }
    cout << sum << endl;
    return 0;
}