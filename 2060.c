#include <stdio.h>
int main()
{
    int e, n;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &e);
        if (e % 2 == 0)
        {
            count1 = (count1 + 1);
        }

        if (e % 3 == 0)
        {
            count2 = count2 + 1;
        }
        if (e % 4 == 0)
        {
            count3 = count3 + 1;
        }
        if (e % 5 == 0)
        {
            count4 = count4 + 1;
        }
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", count1, count2, count3, count4);

    return 0;
}