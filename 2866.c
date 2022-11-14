#include<stdio.h>
#include<string.h>
int main()
{
int test_case; 
char str[1000]; 
scanf("%d\n", &test_case); 
for (int i = 0; i < test_case; i++)
{
    int len; 
    fgets(str, 1000, stdin); 
    len = strlen(str) -1; 
    for (int j = (len-1); j >= 0; j--)
    {
        if (str[j]>96 && str[j]<123)
        {
            printf("%c",str[j]); 
        }
        
    }
    printf("\n"); 
}

return 0;
}