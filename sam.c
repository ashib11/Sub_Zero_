#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, length, flag = 0, ans;
    scanf("%d", &test_case);
    char str[1000000];
    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", str);
        length = strlen(str);
        flag = 0;
        if (length > 1)
        {

            for (int i = 0; i < length; i++)
            {
                if (!strcmp(str[i], str[i + 1]))
                {
                    flag = 1;
                    continue;
                }
            }
            if (flag == 1)
            {
                ans = (length-1) * 9;
                printf("%d\n", ans);
            }
            else
            {
                ans = length * 2 - 1;
                printf("%d\n", ans);
            }
        }
        else
            printf("%s\n", str);
    }

    return 0;
}