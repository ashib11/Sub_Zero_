#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, len1, len2;
    char str[100], name[100];
    scanf("%d", &test_case);
    getchar();
    for (int i = 0; i < test_case; i++)
    {
        int flag = 0;
        fgets(str, 100, stdin);
        fgets(name, 100, stdin);
        len1 = strlen(str);
        len2 = strlen(name);
        if (len1 != len2)
        {
            printf("No\n");
        }
        else
        {
            for (int j = 0; j < len1; j++)
            {
                if (name[j] != str[j])
                {
                    if ((name[j] == 'a') || (name[j] == 'e') || (name[j] == 'i') || (name[j] == 'o') || (name[j] == 'u'))
                    {
                        if ((str[j] == 'a') || (str[j] == 'e') || (str[j] == 'i') || (str[j] == 'o') || (str[j] == 'u'))
                        {
                            flag = 1;
                        }
                    }
                }

                else
                {
                    continue;
                }
            }
            if (flag == 1)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }

    return 0;
}