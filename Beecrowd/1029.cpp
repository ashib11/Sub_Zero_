#include <bits/stdc++.h>
using namespace std;
int check;
int fun(int n);

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        check = 0;
        printf("fib(%d) = %d calls = %d\n", n, check - 1, fun(n));
    }
    return 0;
}
int fun(int n)
{
    check++;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;

    int ans = fun(n - 1) + fun(n - 2);

    return ans;
}