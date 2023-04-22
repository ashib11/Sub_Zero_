#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fastIO();
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (is_prime(n))
        {
            cout << "Prime\n";
        }
        else
        {
            cout << "Not Prime\n";
        }
    }
    return 0;
}
