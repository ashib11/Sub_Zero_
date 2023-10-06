#include<stdio.h>
#include<string.h>
int main()
{
    int length,sum=0;
char str[1000]; 
scanf("%s", str); 
length = strlen(str); 
for (int i = 0; i <length; i++)
{
    sum = sum + str[i]-48; 
}
if (sum%2==0)
{
    printf("%s",str);
    printf("0\n"); 
}
else{
    printf("%s", str); 
    printf("1\n"); 
}
return 0;
}