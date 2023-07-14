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
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] > '4')
        {
            if (i == 0 && !('9' - a[i]))
            {
                
                cout << a[i];
            }
            else
                cout << '9' - a[i];
        }
        else
            cout << a[i];
    }
    return 0;
}