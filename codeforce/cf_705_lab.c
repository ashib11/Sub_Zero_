#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 != 0) && (i!=n))
        {
            printf("I hate that ");
        }
        else if ((i % 2 == 0) && (i!=n))
        {
            printf("I love that ");
        }
        else if ((i % 2 != 0) && (i==n))
        {
            printf("I hate it\n");
        }
        else if ((i % 2 == 0) && (i==n))
        {
            printf("I love it\n");
        }
        
    }

    return 0;
}