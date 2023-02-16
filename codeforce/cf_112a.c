#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    int len;
    fgets(str1, 1000, stdin);
    fgets(str2, 1000, stdin);
    len = strlen(str1) - 1;
    int count =0; 
    for (int i = 0; i < len; i++)
    {
        if (str1[i] > 64 && str1[i] < 97)
        {
            str1[i] = str1[i] + 32;
        }
        if (str2[i] > 64 && str2[i] < 97)
        {
            str2[i] = str2[i] + 32;
        }
        if (str1[i] > str2[i])
        {
            printf("1\n"); 
            break; 
        }
        else if (str1[i] < str2[i])
        {
            printf("-1\n"); 
            break; 
        }
        else{
            count++; 
        }
    }
    if (count == len)
    {
       printf("0\n"); 
    }
    
    return 0;
}