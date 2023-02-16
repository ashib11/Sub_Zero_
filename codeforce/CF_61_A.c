#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000], str2[1000];
    gets(str);
    gets(str2);
    int len, sum=0;
    len = strlen(str) ;
    for (int i = 0; i < len; i++)
    {
        sum =0;
        sum = ((str[i] - 48) + (str2[i] - 48)); 
        if (sum ==1)
        {
          printf("1");
        }
        else printf("0"); 
    }

    return 0;
}