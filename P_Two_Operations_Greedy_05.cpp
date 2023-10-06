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
    vector<int> arr(26, 0);
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i)
    {
        arr[a[i] - 'a']++;
    }

    for (int i = 0; i < 25; ++i)
    {

        if (arr[i] > 1)
        {
            arr[i + 1] += arr[i] / 2;
            arr[i] = arr[i] % 2;
        }
    }
    for (int i = 25; i >= 0; --i)
    {
        for (int j = 0; j < arr[i]; ++j)
        {
            cout <<(char) (i + 'a');
        }
    }
    cout << endl;
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