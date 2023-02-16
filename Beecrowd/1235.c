#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int test_case, temp1, temp2, len, n;
    scanf("%d", &test_case);
    getchar(); 
    for (int k = 0; k < test_case; k++)
    {

        fgets(str,120, stdin); 

        len = strlen(str)-1;
    
        n = (len / 2) ;

        for (int i = n-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        for (int i = len -1; i >=n; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    printf("\n"); 
    return 0;
}