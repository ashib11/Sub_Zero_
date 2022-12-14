#include<stdio.h>
#include<string.h>
int main()
{
int test_case,num; 
scanf("%d", &test_case); 
for (int i = 0; i < test_case; i++)
{
   scanf("%d",&num); 
   printf("%d\n", (num/2)); 
}

return 0;
}