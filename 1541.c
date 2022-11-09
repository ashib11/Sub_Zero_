#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, e;
    while (1)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x==0)
        {
            break;
        }
        
        e = sqrt((x * y * 100) / z);
        printf("%d\n", e);
    }

    return 0;
}