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
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x < 0)
            ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < ans.size(); ++i)
    {
        if (cnt == m)
            break;
        sum += ans[i] * -1;
        cnt++; 
    }
    cout << sum << endl;
    return 0;
}