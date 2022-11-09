#include <stdio.h>
#include <math.h>
int main()
{
    int width, length, r1, r2, d1, d2, temp;
    double diagonal, minus1, minus2, minus, use_diagonal;
    while (1)
    {
        scanf("%d %d %d %d", &width, &length, &r1, &r2);
        if (width == 0 && length == 0 && r1 == 0 && r2 == 0)
        {
            break;
        }

        d1 = r1 * 2;
        d2 = r2 * 2;
        use_diagonal = sqrt((width * width) + (length * length));
        minus1 = (sqrt(2) * r1) - r1;
        minus2 = (sqrt(2) * r2) - r2;
        minus = minus1 + minus2;
        diagonal = use_diagonal - minus;
        if (length >= width)
        {
            temp = width;
            width = length;
            length = width;
        }
        // printf("%lf\n",diagonal); 
        if ((diagonal >= (d1 + d2)))
        {
            if (d1 >= d2)
            {
                if (length >= d1)
                {
                    printf("S\n");
                }
                else
                {
                    printf("N\n");
                }
            }
            else if (d2 >= d1)
            {
                if (length >= d1)
                {
                    printf("S\n");
                }
                else
                {
                    printf("N\n");
                }
            }
        }

        else
        {
            printf("N\n");
        }
    }

    return 0;
}