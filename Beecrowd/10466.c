#include <stdio.h>
int main()
{
    float x, avg, sum = 0;
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        scanf("%f", &x);
        
        if (x > 0)
        {
            count = count + 1;
            sum = sum + x;
        }
    }
    avg = sum/count; 
    printf("%d valores positivos\n", count);
    printf("%.1f\n", (avg));

    return 0;
}