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
bool cmp(pair<long double, int> &a, pair<long double, int> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return (a.first > b.first);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    vector<pair<long double, int>> v;
    for (int i = 1; i <= n; ++i)
    {
        long double a, b;
        cin >> a >> b;
        long double x = (a * 1.0 / (a + b));
        // cout << x << endl;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end(), cmp);
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i].second << " ";
    }
    return 0;
}