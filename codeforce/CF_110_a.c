#include <stdio.h>
#include <string.h>
int main()
{
    char str[1213322];
    fgets(str, 1213322, stdin);
    int len, flag = 0, count =0;
    len = strlen(str) - 1;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++; 
        }
        
    }
    if (count == 4 || count == 7)
    {
        printf("YES\n"); 
    }
    else printf("NO\n"); 
    
    
    return 0;
}