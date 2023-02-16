#include<stdio.h>
int main(){
int a,b,temp=0,sum=0; 
scanf("%d %d",&a,&b); 
if (b>a)
{
    temp = a; 
    a = b ; 
    b = temp ; 
}

for (int i = b; i <= a; i++)
{
   if (i%13!=0)
   {
    sum = sum + i;
   
   }
   
}

printf("%d\n",sum); 
return 0;
}