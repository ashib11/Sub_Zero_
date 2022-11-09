#include <stdio.h>
int main()
{
    float age, total = 0, count = 0, avg = 0;

    while (1)
    {
        scanf("%f", &age);
        if (age < 0)
        {
            break;
        }
        else
        {

            total = total + age;
            count++;
        }
    }
    avg = total / count;
    printf("%.2f\n", (avg));
    return 0;
}