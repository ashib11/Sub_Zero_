#include <stdio.h>
int main()
{
    double g1, g2;
    int pa, pb, count, testcase,i;
    scanf("%d", &testcase);

    for (i = 0; i < testcase; i++)
    {
        count = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (pa <= pb)
        {
            pa = (pa + (pa * g1) / 100);
            pb = (pb + (pb * g2) / 100);
            count++;
            if (count > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (count <= 100)
        {
            printf("%d anos.\n", count);
        }
    }

    return 0;
}