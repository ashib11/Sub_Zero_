#include <stdio.h>
#include<math.h>
int main()
{
    int radius, width, length, i = 1;
    double diagonal_table,diameter; 
    while (1)
    {
        scanf("%d", &radius);
        if (radius == 0)
        {
            break;
        }
        else
        {
            scanf("%d %d", &width, &length);
            diagonal_table = sqrt((length*length)+(width*width)) ; 
            diameter = radius*2; 
            if (diagonal_table<=diameter)
            {
                printf("Pizza %d fits on the table.\n", i);
                i++;
            }
            else{
                   printf("Pizza %d does not fit on the table.\n", i);
                i++;
            }
        }
    }
    return 0;
}