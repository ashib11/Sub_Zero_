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
int cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return b.second > a.second;

    return (a.first < b.first);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    vector<pair<int, int>> v;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}