#include<stdio.h>
#include<string.h>
int main()
{
char str1[1000]; 
char str2[1000]; 
fgets(str1,1000,stdin); 
fgets(str2, 1000, stdin); 
int len, flag = 1;
len = strlen(str1) -1 ; 
for (int i = 0; i < len; i++)
{
    if (str1[i] == str2[len-1-i])
    {
        flag = 1; 
    }
    else{
        flag = 0; 
        break; 
    }
}
if (flag == 0)
{
    printf("NO\n"); 
}
else printf("YES\n"); 
return 0;
}