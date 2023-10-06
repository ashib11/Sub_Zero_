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
    string cmp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    cin >> d;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i)
    {
        if (d == 'R')
        {
            int index = find(cmp.begin(), cmp.end(), a[i]) - cmp.begin();
            cout << cmp[index - 1];
        }
        else
        {
            int index = find(cmp.begin(), cmp.end(), a[i]) - cmp.begin();
            cout << cmp[index + 1];
        }
    }
    return 0;
}