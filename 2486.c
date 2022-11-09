#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, n, total = 0;
    char str[200];
    while (1)
    {
        scanf("%d", &test_case);
        if (test_case==0)
        {
            break; 
        }
        
        total = 0;
        for (int i = 0; i < test_case; i++)
        {
            scanf("%d ", &n);
            
            gets(str);

            if (!(strcmp(str, "suco de laranja")))
            {
                total = total + (120 * n);
            }
            else if (!(strcmp(str, "morango fresco")) || (!(strcmp(str, "mamao"))))
            {
                total = total + (85 * n);
            }
            else if (!(strcmp(str, "goiaba vermelha")))
            {
                total = total + (70 * n);
            }
            else if (!(strcmp(str, "manga")))
            {
                total = total + (56 * n);
            }
            else if (!(strcmp(str, "laranja")))
            {
                total = total + (50 * n);
            }
            else if (!(strcmp(str, "brocolis")))
            {
                total = total + (34 * n);
            }
        }
        if (total > 130)
        {
            total = total - 130;
            printf("Menos %d mg\n", total);
        }
        else if (total < 110)
        {
            total = 110 - total;
            printf("Mais %d mg\n", total);
        }
        else
            printf("%d mg\n", total);
    }

    return 0;
}