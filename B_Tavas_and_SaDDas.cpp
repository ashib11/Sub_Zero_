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
    string num;
    cin >> num;
    int len = num.length();
    int index = 1 + (1 << len) - 2;
    reverse(num.begin(), num.end());
    for (int i = 0; i < len; i++)
    {
        if (num[i] == '7')
            index += pow(2, i);
    }
    cout << index << '\n';
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}