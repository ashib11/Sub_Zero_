#include <stdio.h>
void printString(char arr[]);
int main()
{
    char arr[200];
    int i = 0, j = 0;
    for (int i = 0; ; i++)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '\n')
        {
           break; 
        }
        
    }
    printString(arr);
    printf("\n"); 
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
       
        if (arr[i] == ',')
        {
            arr[i]='\n'; 
            
        }
         printf("%c", arr[i]);
    }
}