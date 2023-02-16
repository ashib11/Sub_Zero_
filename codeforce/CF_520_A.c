#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char check[] = "abcdefghijklmnopqrstuvwxyz";
    int len,flag;
    scanf("%d", &len);
    getchar();
    char str[len + 10];
    scanf("%s", str);
    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
    
    for (int i = 0; i < 26; i++)
    {
        flag = 0; 
        for (int j = 0; j < len; j++)
        {
            if (check[i] == str[j])
            {
               flag = 1; 
            }
        }
        if (flag == 0)
        {
           printf("NO\n"); 
           break; 
        }
        
    }
    if (flag == 1)
    {
      printf("YES\n"); 
    }
    

    return 0;
}