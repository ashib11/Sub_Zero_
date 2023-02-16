#include<stdio.h>
#include<string.h>
int main()
{
int test_case; 
float value; 
scanf("%d",&test_case); 
char str[20000]; 
for (int i = 0; i < test_case; i++)
{
    scanf("%s",str); 
    value = strlen(str) * (1/100.0); 
    printf("%0.2f\n",value); 
}

return 0;
}