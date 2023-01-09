#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int test_case; 
    scanf("%d",&test_case);
    int n,sum=0, crime=0;  
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d",&n); 
        if (n>0)
        {
           sum+=n; 
        }
        else{
            if (sum == 0)
            {
               crime++; 
            }
            else{
                sum--; 
            }
        }
    }
    printf("%d\n",crime); 
    return 0;
}