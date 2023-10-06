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
    int n, x;
    long long int sum, distres = 0;
    cin >> n >> x;
    sum = x; 
    while (n--)
    {
        char a;
        int cup;
        cin >> a >> cup ; 
        if (a == '+')
        {
            sum += cup;
            
        }
        else if (a == '-')
        {
            if (sum >= cup)
                {sum -= cup; }
            else
                distres++;
        }
    }
    cout << sum << " " << distres << "\n";
    return 0;
}