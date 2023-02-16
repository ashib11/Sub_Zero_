#include<stdio.h>
int main(){
int a,n;
scanf("%d",&n); 
for (int i = 1; i <= n; i++)
{
    scanf("%d",&a); 
    printf("1"); 
    for (int i = 1; i <=a; i++)
    {
       printf("0"); 
    }
    printf("\n"); 
}

return 0;
}

