#include<stdio.h>
#include<string.h>
int main()
{
char str[10000]; 
int len; 
fgets(str,10000,stdin); 
len = strlen(str) - 1; 
if (str[0]>90)
{
    str[0] = str[0] - 32; 
}
printf("%s\n",str); 
return 0;
}