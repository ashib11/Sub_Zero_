#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, c,d, ans, temp;

    scanf("%d %d %d %d", &a, &b, &c,&d);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > d)
    {
        temp = c;
        c = d;
        d = temp;
    }
    ans = (a+d) - (b+c); 
    printf("%d\n",abs(ans)); 
    return 0;
}