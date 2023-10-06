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
bool cmp(int a, int b)
{
    return b < a;
}
int main()
{
    fastIO();
    int k;
    cin >> k;
    vector<int> v(12);
    for (int i = 0; i < 12; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    ll sum = 0;
    int cnt = 0;
    for (auto it : v)
    {
        if (sum >= k)
            break;
        else
        {
            sum += it;
            cnt++;
        }
    }
    if (sum < k)
        cout << -1 << endl;
    else
        cout << cnt << endl;
    return 0;
}