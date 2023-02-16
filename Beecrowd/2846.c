#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int count = 0;
    float n, sum = 0, i = 2.0;
    while (1)
    {
        
        scanf("%f", &n);
        count =0 ;
        sum = 0; 
        i = 2.0; 
        if (n == 0.00)
        {
            break;
        }
        while (1)
        {

            if (sum >= n)
            {
                break;
            }
            sum += (1 / i);
            count++;
            i++;
        }
        printf("%d\n", count);
         
    }
    return 0;
}