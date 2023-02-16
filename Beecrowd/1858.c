#include<stdio.h>
int main(){
int x,n,j,lowest=20; 
scanf("%d",&n); 
for (int i = 1; i <=n; i++)
{
  scanf("%d",&x); 
    if (lowest>x)
    {
        lowest = x; 
        j =i; 
    }
    
}
printf("%d\n",j);

return 0;
}