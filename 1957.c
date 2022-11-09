#include <stdio.h>
#include <string.h>

int main()
{
    long int b;
    char hex[20];
    scanf("%ld", &b);

    long int i = 0, a, x, l;

    while (b > 0)
    {
        a = b % 16;
        b /= 16;
        if (a <= 9)
        {
            hex[i] = a + 48;
        }
        else if (a == 10)
        {
            hex[i] = 'A';
        }
        else if (a == 11)
        {
            hex[i] = 'B';
        }
        else if (a == 12)
        {
            hex[i] = 'C';
        }
        else if (a == 13)
        {
            hex[i] = 'D';
        }
        else if (a == 14)
        {
            hex[i] = 'E';
        }
        else if (a == 15)
        {
            hex[i] = 'F';
        }
        i++;
    }

    hex[i] = '\0';
    l = strlen(hex);

    for (x = l - 1; x >= 00; x--)
    {
        printf("%c", hex[x]);
    }
    printf("\n");

    return 0;
}