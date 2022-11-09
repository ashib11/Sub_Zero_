#include<stdio.h>
int main(){
int x,m=0,h=0;
scanf("%d",&x); 
if (x>=60)
{
   m = x/60; 
   x = x - (60*m); 
}
if (m>=60)
{
   h = m/60; 
   m = m - (60*h); 
}
printf("%d:%d:%d\n",h,m,x); 

return 0;
}