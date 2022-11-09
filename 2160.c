#include<stdio.h>
#include<string.h>
int main()
{
char str[1000]; 
gets(str); 
int length; 
length = strlen(str); 
if (length<=80)
{
    printf("YES\n"); 
}
else printf("NO\n"); 
return 0;
}