#include <stdio.h>
int main()
{
    char task;
    scanf("%c", &task);
    double arr[12][12], sum = 0;
    int a = 1, b = 11;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = a; j <= b; j++)
        {
            sum += arr[i][j];
        }
        a++;
    }
    if (task == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (task == 'M')
    {
        printf("%.1lf\n", (sum / 66.0));
    }

    return 0;
}