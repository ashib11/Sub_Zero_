#include<stdio.h>
#include<string.h>
int main()
{
int n,m,num,flag=1;
scanf("%d %d",&n,&m); 
int arr[n+10]; 
for (int i = 0; i < n; i++)
{
    scanf("%d",&num);
    if (num ==m )
    {
        flag = 1; 
        break; 
    }
    else flag =0; 
}
if (flag ==0)
{
   printf("NO\n"); 
}
else printf("YES\n"); 
return 0;
}