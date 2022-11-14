#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000], duplicate[] = "abcdefghijklmnopqrstuvwxyz";
    fgets(str, 10000, stdin);
    int len, count = 0;
    len = strlen(str) - 1;
    // printf("%d\n", len);
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (duplicate[i] == str[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            count = count - 1;
        }
        else
            count = 0;
    }
    len = len - count;
    // printf("%d\n");
    if (len % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
        printf("IGNORE HIM!\n");

    return 0;
}