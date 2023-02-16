#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n, c1, c2, mc, h1, h2, sum = 0;

    scanf("%lld %lld %lld", &n, &c1, &c2);
    getchar(); 
    mc = min(c1, c2);

    char s[3];

    for (int i = 0; i < n; i++)
    {
        scanf("%c%c%c", &s[0], &s[1], &s[2]);
        getchar(); 
        if (s[0] != s[1] && s[1] != s[2] && s[0] != s[2])
        {
            sum+= (mc * 3);
        }
        else
        {
            if (2 * c2 <= 3 * c1)
            {
                sum +=  2*c2;
            }
            else if (c1+c2 >= 3 * c1)
            {
                sum += 3*c1;
            }
            else
                sum += c1+c2;
        }
    }
    printf("%lld\n", sum);
}
