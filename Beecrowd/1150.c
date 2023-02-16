#include <stdio.h>
int main()
{
    int x, y=0, z, count=0;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (x >= z);
    for (int i = (x); y < z; i++)
    {
        y = y + i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}