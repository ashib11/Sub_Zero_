#include <stdio.h>
int main()
{
    int T, a, count = 0;
    scanf("%d", &T);
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        if (T == a)
        {
            count++;
        }
    }
    printf("%d\n",count); 
    return 0;
}