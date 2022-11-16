#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    fgets(str, 200, stdin);
    int len, small = 0, capital = 0;
    len = strlen(str)-1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            small++;
        }
        else
            capital++;
    }
    if (capital > small)
    {
        for (int i = 0; i < len; i++)
        {
            if (str[i] > 96 && str[i] < 123)
            {
                str[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (str[i] > 64 && str[i] < 91)
            {
                str[i] += 32;
            }
        }
    }
    printf("%s", str);
    return 0;
}