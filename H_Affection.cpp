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
void solve()
{
   int n;
    cin >> n;
    vector<pair<int,int> > p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; ++i) {
        set<double> s;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int x1 = p[i].first, y1 = p[i].second;
                int x2 = p[j].first, y2 = p[j].second;
                double r = (double) (y2 - y1) / (x2 - x1);
                s.insert(r);
            }
        }
        if (s.size() != n - 1) {
            cout << "Yes" << endl;
            return ;
        }
    }

    cout << "No" << endl;
    return ;
}
int main()
{
    fastIO();
    solve();
    return 0;
}