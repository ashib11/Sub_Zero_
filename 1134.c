#include <stdio.h>
int main()
{
    int fluel,alcho=0,gasso=0,disel=0;
    while (1)
    {
        scanf("%d", &fluel);
        if (fluel == 4)
        {
            break;
        }
        else
        {
            
            if (fluel == 1)
            {
                alcho++; 
            }
            if (fluel == 2)
            {
                gasso++; 
            }
            if (fluel == 3)
            {
               disel++; 
            }
            
        }
    }
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcho,gasso,disel); 
    return 0;
}
