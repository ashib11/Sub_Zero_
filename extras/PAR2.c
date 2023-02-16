#include <stdio.h>
#include <string.h>
int main()
{
    int n, test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d", &n); 
        if (n%2==0)
        {
            printf("YES\n"); 
        }
        else printf("NO\n"); 
    }
    
    return 0;
}