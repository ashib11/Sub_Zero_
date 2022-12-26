#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int test_case, n, lowest = 0;
    scanf("%d", &test_case);
    int flag = 0; 
    for (int i = 1; i <= test_case; i++)
    {
        scanf("%d", &n);
        if (n >= lowest)
        {
            lowest = n;
        }
        else if(lowest>n)
        {
            flag = 1; 
            printf("%d\n", i);
            break;
        }
         
    }
    if (flag == 0)
    {
        printf("0\n"); 
    }
    
    return 0;
}