#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int test_case, n, lowest = 0;
    scanf("%d", &test_case);
    for (int i = 1; i <= test_case; i++)
    {
        scanf("%d", &n);
        if (n >= lowest)
        {
            lowest = n;
        }
        else
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}