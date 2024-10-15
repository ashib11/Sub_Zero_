#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int st, int n, int k, vector<int> &tmp)
    {
        if (k == 0)
        {
            ans.push_back(tmp);
            return;
        }
        if (st > n)
            return;
        tmp.push_back(st);
        solve(st + 1, n, k-1, tmp);
        tmp.pop_back();
        solve(st + 1, n, k, tmp);
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> tmp;
        solve(1, n, k, tmp);
        return ans;
    }
};
void solve1()
{
    Solution sl;
    int n, k;
    cin >> n >> k;
    vector<vector<int>> ans = sl.combine(n, k);
    for (auto a : ans)
    {
        for (auto b : a)
        {
            cout << b << ' ';
        }
        cout << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve1();
    }
    return 0;
}
