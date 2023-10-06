#include<stdio.h>
#include<string.h>
int main()
{
char a,b,c,d;
int test_case,count=1; 
scanf("%d",&test_case); 
getchar(); 
scanf("%c%c",&a,&b); 
getchar(); 
for (int i = 0; i <test_case-1; i++)
{
   scanf("%c%c",&c,&d); 
   getchar(); 
   if (b == c)
   {
    count++; 
   }
   a= c;
   b = d; 
    
}
printf("%d\n",count) ; 
return 0;
}