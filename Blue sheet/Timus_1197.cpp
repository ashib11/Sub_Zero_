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
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a;
        cin >> a;
        if (a[1] == '8')
            a[1] = '1';
        else if (a[1] == '7')
            a[1] = '2';
        else if (a[1] == '6')
            a[1] = '3';
        else if (a[1] == '5')
            a[1] = '4';

        if (a[0] == 'h')
            a[0] = 'a';
        else if (a[0] == 'g')
            a[0] = 'b';
        else if (a[0] == 'f')
            a[0] = 'c';
        else if (a[0] == 'e')
            a[0] = 'd';

        if (a == "a1")
            cout << "2" << endl;
        else if (a == "a2" || a == "b1")
            cout << "3" << endl;
        else if (a == "a3" || a == "a4" || a == "b2" || a == "c1" || a == "d1")
            cout << "4" << endl;
        else if (a == "c2" || a == "d2" || a == "b3" || a == "b4")
            cout << "6" << endl;
        else cout << "8" << endl; 
    }
    return 0;
}