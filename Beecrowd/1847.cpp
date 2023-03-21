#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b && b<c && a>c) cout << ":)\n";
    else if(b>a && c >b) cout << ":(\n" ; 

    return 0;
}