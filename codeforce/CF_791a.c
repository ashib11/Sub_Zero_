#include<stdio.h>
#include<string.h>
int main()
{
int wL, wB, count =0;
scanf("%d %d", &wL, &wB); 
while (1)
{
    if (wL>wB)
    {
        break; 
    }
    wL*=3; 
    wB*=2;
    count++;  
}
 printf("%d\n", count); 

return 0;
}