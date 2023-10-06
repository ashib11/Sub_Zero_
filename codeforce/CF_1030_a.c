#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, num, flag = 1;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d", &num);
        if (num == 1)
        {
            flag = 0;
            printf("Hard\n");
            break;
        }
    }
    if (flag == 1)
    {
        printf("Easy\n");
    }
    return 0;
}