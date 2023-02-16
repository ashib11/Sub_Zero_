#include <stdio.h>
#include <string.h>
int main()
{
    char str[1002];
    char reverse[1002];
    int test_case;
    scanf("%d", &test_case);
    getchar(); 
    for (int i = 0; i < test_case; i++)
    {
        int len;
       gets(str); 
        len = strlen(str);
        for (int j = 0; j < len; j++)
        {
            if ((str[j] > 96 && str[j] < 123) || (str[j] > 64 && str[j] < 133))
            {
                str[j] = str[j] + 3;
            }
        }
        // printf("%s\n",str);
        for (int k = (len - 1), l = 0; k >= 0,l<len; k--, l++)
        {
            reverse[l] = str[k];
        }
        reverse[len] = '\0'; 
        for (int i = (len / 2); i < len; i++)
        {

            reverse[i] -= 1;
        }
        puts(reverse); 
    }

    return 0;
}