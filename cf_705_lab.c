#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it\n");
    }
    else if (n == 2)
    {
        printf("I hate that I love it\n");
    }
    else
    {
        printf("I hate ");
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                printf("I hate ");
            }
            if (i % 2 != 0)
            {
                printf("I love ");
            }
            if (i==(n-1))
            {
                printf("it\n"); 
            }
            else{
                printf("that "); 
            }
        }
        printf("it\n");
    }
    return 0;
}