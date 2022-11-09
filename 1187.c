#include <stdio.h>
int main()
{
    char task;
    scanf("%c", &task);
    double arr[12][12], sum = 0;
    int a = 1, b = 10;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = a; j <= b; j++)
        {
            sum += arr[i][j];
        }

        a++;
        b--; 
    }
    if (task == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (task == 'M')
    {
        printf("%.1lf\n", (sum / 30.0));
    }

    return 0;
}