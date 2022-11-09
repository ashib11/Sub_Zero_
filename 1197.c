#include<stdio.h>
#include<string.h>
int main()
{
    int v,t,s; 
while (scanf("%d %d",&v,&t)!=EOF)
{
    s = 2*(v*t); 
    printf("%d\n",s); 
}

return 0;
}