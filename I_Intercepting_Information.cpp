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

    bool flag = 0;
    for (int i = 0; i < 8; ++i)
    {
        int x;
        cin >> x;
        if (x == 9)
            flag = 1;
    }
    if (flag)
        cout << "F" << endl;
    else
        cout << "S" << endl;
    return 0;
}