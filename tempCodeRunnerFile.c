#include<stdio.h>
#include<string.h>
int main()
{
int arr[5] = {5,4,3,2,1}; 
int x, count=0; 
scanf("%d", &x); 
for (int i = 0; i < 5; i++)
{
    x = x - arr[i]; 
    count++; 
    if (x<=0)
    {
       printf("%d\n", count); 
       break;
    }
    
}

return 0;
}