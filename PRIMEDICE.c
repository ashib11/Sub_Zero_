#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, test_case, sum ;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int count = 0;
        scanf("%d %d", &a, &b);
        sum = a + b;
        for (int i = 2; i <= (sum / 2); i++)
        {
            if (sum % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
           printf(("Alice\n")); 
        }
        else printf("Bob\n"); 
    }

    return 0;
}