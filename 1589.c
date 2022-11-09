#include<stdio.h>
#include<string.h>
int main()
{
int test_case,r1,r2; 
scanf("%d",&test_case); 
for (int i = 0; i < test_case; i++)
{
    scanf("%d %d",&r1,&r2); 
    printf("%d\n",(r1+r2)); 
}

return 0;
}