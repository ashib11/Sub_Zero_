#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {

        if (a == b)
        {
            if (b == c)
            {
                printf("*\n");
            }
            else
                printf("C\n");
        }
        else if (b == c)
        {
            if (c == a)
            {
                printf("*\n");
            }
            else
                printf("A\n");
        }
        else printf("B\n"); 
    }

    return 0;
}