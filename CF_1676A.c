#include <stdio.h>
#include <string.h>
int main()
{

    int test_case, sum_first = 0, sum_last = 0;
    char digit[10];
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        sum_first = 0, sum_last = 0;
        getchar(); 
        for (int j = 0; j < 6; j++)
        {
            scanf("%c", &digit[j]);
        }
        for (int k = 0; k < 6; k++)
        {
            if (k < 3)
            {
                sum_first = sum_first + (int)digit[k];
            }
            if ((k >= 3) && (k < 6))
            {
                sum_last = sum_last + (int)digit[k];
            }
        }
        
        if (sum_first == sum_last)
        {
           printf("YES\n");
        }
       else printf("NO\n"); 
    }

    return 0;
}