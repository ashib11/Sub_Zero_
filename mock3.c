#include <stdio.h>
#include <string.h>
int main()
{
    int n, vag, a, b, c;
    scanf("%d", &n);
    if (n == 4)
    {
        printf("Invalid\n");
    }

    else if (n % 3 != 0)
    {
        printf("Isosceles\n");
    }

    else if (n % 3 == 0)
    {
        printf("Equilateral\n");
    }
    else
    {
        printf("Invalid\n");
        return 0;
    }
}