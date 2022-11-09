#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, digit = 0;
    char x, y, z;
    scanf("%d", &test_case);
    getchar();
    for (int i = 0; i < test_case; i++)
    {
        scanf("%c%c%c", &x, &y, &z);
        getchar();
        if ((y == '+'))
        {
            ++digit;
        }
        if ((y == '-'))
        {
            --digit;
        }
    }

    printf("%d\n", digit);

    return 0;
}