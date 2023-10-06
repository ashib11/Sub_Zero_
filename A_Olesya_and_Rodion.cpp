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
    string m;
    cin >> n >> m;
    if (m.size() > n)
    {
        cout << -1 << endl;
        return 0;
    }
    if (n % (m.size()))
        cout << 1;
    for (int i = 0; i < n / (m.size()); ++i)
    {
        cout << m;
    }

    cout << endl;
    return 0;
}