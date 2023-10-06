#include<stdio.h>
#include<string.h>
int main()
{
int p,v,t,test_case; 
scanf("%d",&test_case);
int count =0; 
for (int i = 0; i < test_case; i++)
{
    scanf("%d %d %d",&p,&v,&t); 
    if (p+v+t>=2)
    {
        count++; 
    }
    
}
printf("%d\n",count); 
return 0;
}