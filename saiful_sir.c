#include <stdio.h>
#include <string.h>
int main()
{
    char str[990];
    fgets(str, 990, stdin);
    int len;
    len = strlen(str) - 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] -= 32;
        }
    }
    printf("%s\n", str);
    return 0;
}