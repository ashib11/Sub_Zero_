#include <stdio.h>
#include <string.h>
int main()
{
    char str[5000];
    gets(str);
    int len, flag = 1, count = 0;
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        flag = 1;
        for (int j = i+1; j < len; j++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if (str[i] == str[j])
                {
                    flag = 1;
                    break;
                }
                else flag = 0; 
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
printf("%d\n",count); 
    return 0;
}