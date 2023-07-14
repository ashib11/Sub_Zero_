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
    string a;
    cin >> a;

    vector<int> ans(a.size(),0);

    for (int i = 1; i < a.size(); ++i)
    {
        ans[i] = ans[i - 1] + (a[i - 1] == a[i]);
    }
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; ++i)
    {
        int l, r;
        cin >> l >> r;
        cout << -ans[l - 1] + ans[r - 1] << endl;
    }
    return 0;
}