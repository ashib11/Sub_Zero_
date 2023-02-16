#include<stdio.h>
#include<string.h>
int fun(int n);
int main()
{
int x,n; 
scanf("%d", &x); 
n = x*10; 
printf("%d\n", fun(n)); 
return 0;
}
int fun(int n){
    if (n == 10)
    {
        return 10; 
    }
    if (n == 20)
    {
        return 20;
    }
    int ans = fun(n-10)* fun(n-20);
}