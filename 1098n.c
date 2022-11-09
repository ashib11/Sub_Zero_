#include <stdio.h>
int main()
{
    int i = 0;

    for (float i = 0; i < 2.1; i += 0.2)

    {

        for (float j = 1; j <= 3; j++)
        {
            if (i == 0 || i == 1 || i == 2)
            {
                while (j < 4)
                {
                    printf("I=%.0f J=%.0f\n", i, (j + i));
                    j++; 
                }
            }

            printf("I=%.1f J=%.1f\n", i, (j + i));
        }
        printf("\n");
    }

    return 0;
}