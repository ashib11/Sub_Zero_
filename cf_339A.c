#include <stdio.h>
#include <string.h>
int main()
{
    char str[1010];
    scanf("%s", str);
    int temp, len;
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > 47 && str[i] < 58)
            {
                if (str[j] > 47 && str[j] < 58)
                {
                    if (str[i] > str[j])
                    {
                        temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                    }
                }
            }
        }
    }
    printf("%s\n", str); 
    return 0;
}