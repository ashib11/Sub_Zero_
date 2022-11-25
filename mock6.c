#include <stdio.h>
#include <string.h>
int main()
{
    int nB, nS, stamina, sum = 0, home;
    scanf("%d", &nB);
    int arr[nB];

    for (int i = 0; i < nB; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &nS);
    for (int k = 0; k < nS; k++)
    {
        int flag = 0;
        scanf("%d", &stamina);
        sum = stamina;
        for (int i = 0; i < nB - 1; i++)
        {
            home = arr[i] - arr[i + 1];
            sum = sum + home;
            if (sum <0 )
            {
                flag = 1;
                printf("No way Home\n");
                break;
            }
        }
        if (flag == 0)
        {
            printf("Homecoming\n");
        }
    }

    return 0;
}