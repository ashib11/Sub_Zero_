#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char str1[1010], str2[1010], all[2000];
    scanf("%s %s %s", str1, str2, all);
    int arr[1000] = {0}, check[1000] = {0};
    int len1, len2, al;
    len1 = strlen(str1);
    len2 = strlen(str2);
    al = strlen(all);
    int pos;
    for (int i = 0; i < len1; i++)
    {
        pos = str1[i];
        arr[pos]++;
    }
    for (int i = 0; i < len2; i++)
    {
        pos = str2[i];
        arr[pos]++;
    }
    for (int i = 0; i < al; i++)
    {
        pos = all[i];
        check[pos]++;
    }
    int flag = 0;
    for (int i = 65; i < 91; i++)
    {
        if (arr[i] != check[i])
        {
            flag = 1;
            printf("NO\n");
            break;
        }
    }
    if (flag == 0)
    {
        printf("YES\n");
    }

    return 0;
}