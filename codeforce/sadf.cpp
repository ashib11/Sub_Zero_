#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n, sum;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        sum = 1;
        int bob = 0;
        int her = 1;
        int j = 2;
        while (1)
        {
            int i = 2;
            while (i--)
            {

                bob += j;
                j++;
                if (sum >= n)
                {
                    break;
                }
            }
            sum += bob;

            i = 2;
            while (i--)
            {
                her += j;
                j++;
                if (sum >= n)
                {
                    break;
                }
            }
            sum += her;
            if (sum >= n)
            {
                break;
            }
        }
        cout << her << " " << bob << endl;
    }
    return 0;
}