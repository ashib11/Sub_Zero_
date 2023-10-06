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
    auto x1 = a.find("AB");
    // if(x1!= -1 )
    //  cout << x1 << endl;
    //  else cout << "NOT found" << endl;
    auto x2 = a.find("BA", x1 + 2);
    auto x3 = a.find("BA");
    auto x4 = a.find("AB", x3 + 2);

    if ((x1 != -1 && x2 != -1) || (x3 != -1 && x4 != -1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}