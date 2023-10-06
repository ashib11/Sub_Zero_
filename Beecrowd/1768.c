#include <stdio.h>

int main ()
{

    int x, i, j, z;

    while (scanf("%d", &x) != EOF)
    {

        for (i = 0; i < x; i += 2)
        {
            for (j = 0; j < (x - i) / 2; j++)
                printf(" ");

            for (z = i; z >= 0; z--)
                printf("*");

            printf("\n");

        }

        for (i = 0; i < x/2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < x/2; i++)
            printf(" ");
-
        printf("***\n\n");

    }
}