#include <stdio.h>
#include <string.h>
int main()
{
    int len1, len2, limit;
    char str1[] = "00000000000000000000", str2[] = "00000000000000000000";
    gets(str1);
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len2 > len1)
    {
        limit = len2;
    }
    else
        limit = len1;

    for (int i = 0; i < limit; i++)
    {
        if (str1[i] == str2[i])
        {
            continue;
        }

        if (str1[i] > str2[i])
        {
            printf("%s\n", str2);
            printf("%s\n", str1);
            break;
        }
        else
        {
            printf("%s\n", str1);
            printf("%s\n", str2);
            break;
        }
    }

    return 0;
}