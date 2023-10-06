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
    vector<int> temp = v;
    sort(temp.begin(), temp.end());
    int l=0, r=0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != temp[i])
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] != temp[i])
        {
            r = i;
            break;
        }
    }
    for (int i = l; i < r; ++i)
    {
        if (v[i] < v[i + 1])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1 << endl;
    return 0;
}