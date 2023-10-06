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
}
int main()
{
    fastIO();
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(all(v));
        for (int i = 0; i < n - 1; ++i)
            cout << v[i] << " ";
        cout << v[n-1] << endl;
    }
    return 0;
}