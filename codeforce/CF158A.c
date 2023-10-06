#include<stdio.h>
#include<string.h>
int main()
{
int n,k; 
scanf("%d %d",&n,&k); 
int pos[n]; 
for (int i = 0; i < n; i++)
{
    scanf("%d",&pos[i]); 
    
}
int count =0; 
for (int i = 0; i < n; i++)
{
    if ((pos[i]>0)&&(pos[i]>=pos[k-1]))
    {
        count++;  
    }
    
}
printf("%d\n",count);
return 0;
}