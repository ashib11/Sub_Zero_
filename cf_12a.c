#include<stdio.h>
#include<string.h>
int main()
{
char str[100]; 
char str2[100]; 
fgets(str,100,stdin); 
fgets(str2, 100, stdin); 
int len, sum1=0, sum2=0, dif;  
len = strlen(str) ; 
for (int i = 0; i < len; i++)
{
    sum1 = sum1 + str[0]; 
}
for (int i = 0; i < len; i++)
{
    sum2= sum2 + str2[0]; 
}

dif = sum1 - sum2; 
if (dif<0)
{
    printf("-1\n"); 
}
else if (dif>0)
{
    printf("1\n"); 
}
else printf("0\n"); 

return 0;
}