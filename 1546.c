#include<stdio.h>
int main(){
int n,k,c; 
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    scanf("%d",&k); 
    for (int i = 1; i <=k; i++)
    {
       scanf("%d",&c); 
       if (c == 1)
       {
        printf("Rolien\n");
       }
       if (c == 2 )
       {
        printf("Naej\n");
       }
       if (c == 3)
       {
        printf("Elehcim\n");
       }
       if (c == 4)
       {
        printf("Odranoel\n");
       }
       
    }
    
}
 
return 0;
}