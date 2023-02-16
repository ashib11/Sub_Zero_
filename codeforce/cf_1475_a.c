#include <stdio.h>
#include <string.h>
int main()
{
    long long int test_case, num;
    scanf("%lld", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int flag = 0;
        scanf("%lld", &num);
        int k = 0 ; 
        while (num>2)
        {
            if (num % 2 == 1)
            {
                printf("YES\n");
                k = 1; 
                break; 
            }
            else
            {
                num = num / 2;
            }
        }
        if (k == 0)
        {
            printf("NO\n"); 
        }
        
    }

    return 0;
}