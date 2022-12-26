#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < col; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            if (i % 4 == 0)
            {
                printf("#");
                for (int j = 1; j < col; j++)
                {
                    printf(".");
                }
                printf("\n");
            }
            else
            {

                for (int j = 1; j < col; j++)
                {
                    printf(".");
                }
                printf("#\n");
            }
        }
    }

    return 0;
}