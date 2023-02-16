#include <stdio.h>
 
int main()
{
    int t, n, m;
 
    scanf("%d", &t);
 
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);
 
        if(n == 1)
            printf("0\n");
        else if(n == 2)
            printf("%d\n", m);
        else 
            printf("%d\n", 2 * m);
    }
 
    return 0;
}
