#include <stdio.h>

int main()
{
    int n, s, r, original[100000], arr[1000], i = 0, j = 1, temp = 0;
    while (scanf("%d %d", &s, &r) != EOF)
    {
        if (s - r == 0)
        {
            for (i = 0; i < r; i++)
            {
                scanf("%d", &arr[i]);
            }


            printf("*\n");
        }

        else

        {
            i = 0, j = 1;
            for (i = 0; i < r; i++)
            {
                scanf("%d", &arr[i]);
            }

            for (int i = 0; i < s; i++)
            {
                original[i] = j;
                ++j;
            }
            for (int i = 0; i < r; i++)
            {
                for (int k = i + 1; k < r; k++)
                {
                    if (arr[i] > arr[k])
                    {
                        temp = arr[i];
                        arr[i] = arr[k];
                        arr[k] = temp;
                    }
                }
            }

            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < s; j++)
                {
                    if (arr[i] == original[j])
                    {
                        original[j] = 0;
                        i++;
                    }
                }
            }
            for (int i = 0; i < s; i++)
            {
                if (original[i] != 0)
                {
                    printf("%d ", original[i]);
                }
                
            }
            printf("\n"); 
        }
    }
    return 0;
}