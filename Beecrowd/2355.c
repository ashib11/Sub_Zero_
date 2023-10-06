#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int brasil;
    double ger,time;
    while ( 1)
    {
        scanf("%lf", &time); 
        if (time ==0)
        {
            break; 
        }
        
        brasil = (time/90);
        ger = ceil((7*time)/90.0); 
        printf("Brasil %d x Alemanha %.0f\n",brasil,ger); 
    }
    return 0;
}