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
    cin >> n;
    string a;
    cin >> a;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {

        // cout << i << endl; 
        if (a[i] == '0')
        {
            // cout << i << endl; 
            a[i] = 1;
            a[i + 1] = 1;
            cnt++;
            // cout << i << " " << i + 1 << endl;
            i ++;
        }
    }
    cout << cnt << endl;
    return 0;
}