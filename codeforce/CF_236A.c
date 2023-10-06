#include <stdio.h>
#include <string.h>
int main()
{
    int len, temp, count = 0;
    char str[10000];
    fgets(str, 1000, stdin);
    len = strlen(str) - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("IGNORE HIM!\n");
    }
    else
        printf("CHAT WITH HER!\n");
    return 0;
}