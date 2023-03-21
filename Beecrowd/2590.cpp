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
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n; 
        cin >> n;
        if (n == 0)
        {
            cout << 1 << endl; 
        }
        else
        {
            int last_digit = ((int)pow(7, n % 4))%10; 
            cout << last_digit << "\n";
        }
    }
    return 0;
}