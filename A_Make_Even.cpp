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
    string num;
    cin >> num;
    bool check = false;
    for (int i = 0; i < num.size(); ++i)
    {
        if (num[i] % 2 == 0)
        {
            check = true;
            break;
        }
    }
    if (stoi(num) % 2 == 0)
        cout << 0 << endl;
    else if (num[0] % 2 == 0)
        cout << 1 << endl;
    else if (check)
        cout << 2 << endl;
    else
        cout << -1 << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}