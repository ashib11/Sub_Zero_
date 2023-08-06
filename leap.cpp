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
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        cout << "Leap year" << endl;
    else
        cout << "Not leap year" << endl;

    return 0;
}