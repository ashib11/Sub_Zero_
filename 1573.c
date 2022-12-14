#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int a,b,c,ans; 
while (1)
{
   scanf("%d %d %d",&a,&b,&c); 
   if (a == 0 && b == 0 && c == 0)
   {
   break; 
   }
   ans = cbrt(a*b*c); 
   printf("%d\n",ans); 
}

return 0;
}