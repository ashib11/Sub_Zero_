#include <stdio.h>
#include <string.h>
int main()
{
     int test_case;
     int num, count, flag, x;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        count = 0, flag = 0;
        scanf("%d", &num);

        while (num % 6 == 0)
        {
            num = num / 6;
            count++;
        }
        while (num % 3 == 0)
        {
            num =num/ 3;
        }
        if (num == 1)
        {
            printf("%d\n", count);
        }
        else printf("-1\n"); 
    }
    return 0;
}
