#include<stdio.h>
#include<string.h>
int main()
{
int test_case; 
scanf("%d",&test_case); 
int p,highest,count=0,dif; 
for (int i = 0; i < test_case; i++)
{
    scanf("%d %d", &p,&highest); 
    dif = highest - p; 
    if (dif>=2)
    {
       count++; 
    }
    
}
printf("%d\n", count); 
return 0;
}