#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int test_case, sum = 0;
    char str[1234];
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", str);
        if (str[0] == 'I')
        {
            sum += 20;
        }
        if (str[0] == 'T')
        {
            sum += 4;
        }

        if (str[0] == 'C')
        {
            sum += 6;
        }
        if (str[0] == 'O')
        {
            sum += 8;
        }
        if (str[0] == 'D')
        {
            sum += 12;
        }
    }
    printf("%d\n", sum);
    return 0;
}