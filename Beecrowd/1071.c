#include <stdio.h>
int main()
{
    int x, y, z=0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        for (int i = y; i < x; i++)
        {
            if ((i % 2) != 0){
                printf("%d\n", z);
                z = z + i;}
        }
    }
    else
    {
        for (int i = x; i < y; i++)
        {
            if ((i % 2) != 0){
            printf("%d\n", z);
                z = z + i;}
        }
    }
    printf("%d\n", z);
    return 0;
}
