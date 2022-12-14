#include <stdio.h>
#include <string.h>
int main()
{
    int odd[] = {1, 3, 5, 7, 9}, even[] = {2, 4, 6, 8};

    int test_case, n1, n2, dif;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &n1, &n2);
        dif = n2 - n1;
        if (dif == 0)
        {
            printf("0\n");
        }
        if (dif > 0)
        {
            for (int i = 4; i >= 0; i--)
            {
                if (dif % 2 == 0)
                {
                    printf("2\n");
                 break; 
                }
                else
                    printf("1\n");
                    break; 
            }
        }
        if (dif < 0)
        {
            for (int i = 3; i >= 0; i--)
            {
                if (dif % 2!= 0)
                {
                    printf("2\n");
                   break ;
                }
                else
                    printf("1\n");
                    break; 
            }
        }
    }

    return 0;
}