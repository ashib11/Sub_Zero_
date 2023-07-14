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
int func(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return func(n - 1) + func(n - 2);
}
int main()
{
    fastIO();

    return 0;
}