#include<stdio.h>
#include<string.h>
int main()
{
int test_case; 
scanf("%d\n",&test_case); 
char str[1000]; 
for (int i = 0; i < test_case; i++)
{
    int len; 
    fgets(str,1000,stdin); 
    len = strlen(str) - 1; 
    if (len>10 )
    {
        printf("%c%d%c\n",str[0],len-2,str[len-1]); 
    }
    else printf("%s\n",str); 
}

return 0;
}