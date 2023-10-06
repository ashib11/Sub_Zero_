#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num % 3 == 0)
        {
            if (num % 5 == 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 2 ,3,5 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 2 ,3 and 5\n");
                }
            }

            else if (num % 5 != 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 2 ,3 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 2 and 3\n");
                }
            }
        }

        else if (num % 3 != 0)
        {
            if (num % 5 == 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 2 ,5 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 2  and 5\n");
                }
            }

            else if (num % 5 != 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 2 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 2\n");
                }
            }
        }
    }

    else if (num % 2 != 0)
    {

        if (num % 3 == 0)
        {
            if (num % 5 == 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 3,5 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 3 and 5\n");
                }
            }

            else if (num % 5 != 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 3 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 3\n");
                }
            }
        }

        else if (num % 3 != 0)
        {
            if (num % 5 == 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 5 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 5\n");
                }
            }

            else if (num % 5 != 0)
            {
                if (num % 7 == 0)
                {
                    printf("divisable by 3 and 7\n");
                }
                else if (num % 7 != 0)
                {
                    printf("divisable by 7\n");
                }
            }
        }
    }

    return 0;
}