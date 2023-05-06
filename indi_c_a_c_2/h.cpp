#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int count = 0;
    string a;
    cin >> a;
    int arr[26] = {0};
    for (int i = 0; i < a.size(); ++i)
    {
        arr[a[i] - 'a'] = 1;
    }
    for (int i = 0; i < 26; ++i)
    {
        count += arr[i];
    }
    if (count % 2 != 0)
    {
        cout << "IGNORE HIM!\n";
    }
    else
        cout << "CHAT WITH HER!\n";
    return 0;
}