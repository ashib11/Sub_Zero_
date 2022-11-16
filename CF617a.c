#include<stdio.h>
#include<string.h>
int main()
{
int arr[5] = {5,4,3,2,1}; 
int x, count=0, dif; 
scanf("%d", &x); 
for (int i = 0; i < 5; i++)
{
    
    dif = x / arr[i]; 
    x = x%arr[i]; 
    count+=dif; 
    if (x==0)
    {
        break; 
    }
    
}
printf("%d\n", (count)); 
return 0;
}