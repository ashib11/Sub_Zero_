#include <stdio.h>
int main()
{
    int x, sum;
    while (1)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }
        
        if (x % 2 == 0)
        {
            sum = 0;  
            for (int i = 1; i <= 5; i++)
            {

               sum = sum+x; 
               x+=2; 
                
            }
            printf("%d\n", sum);
        }
        else
        {
            sum = 0 ;
             x = x + 1;
            for (int i = 1; i <= 5; i++)
            {
               
                sum = sum + x; 
                x+=2; 
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}