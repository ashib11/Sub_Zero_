#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
int test_case; 
scanf("%d", &test_case); 
getchar(); 
char str[200]; 
for (int i = 0; i < test_case; i++)
{
    gets(str); 
    int len = strlen(str); 
    printf("%c",str[0]); 
    for (int j = 1; j < len; j+=2)
    {
        printf("%c",str[j]); 
        
    }
    printf("\n"); 
    
}

return 0;
}