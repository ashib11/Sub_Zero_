#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    int test_case;
    scanf("%d", &test_case);
    getchar(); 
    for (int i = 0; i < test_case; i++)
    {
        int len;
        fgets(str, 60, stdin);
        len = strlen(str);
        if (str[0] > 96 && str[0] < 123)
        {
            printf("%c", str[0]);
        }
        for (int j = 1; j < len; j++)
        {
            if (str[j] > 96 && str[j] < 123)
            {
                if (str[j - 1] == ' ')
                {
                    printf("%c", str[j]);
                }
            }
        }
        printf("\n"); 
    }

    return 0;
}