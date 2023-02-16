#include <stdio.h>
int main()
{
    int n_alum, n_din,j, count = 0;

    while (1)
    {
        scanf("%d %d", &n_alum, &n_din);
        if (n_alum == 0 && n_din == 0)
        {
            break;
        }

        int arr[n_din][n_alum];
        for (int i = 0; i < n_din; i++)
        {
            for (int j = 0; j < n_alum; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < n_alum; i++)
        {
            
            for (j = 0,count=0;  j < n_din; j++)
            {
                

                count += arr[j][i];
            }
            if (count == n_din)
            {
                printf("yes\n");
                break;
            }
            else
                count = 0;
        }
        if (count == 0)
        {
            printf("no\n");
        }
    }
    return 0;
}
