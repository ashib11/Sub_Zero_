#include<stdio.h>
#include<string.h>
int main()
{
char all[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,../"}; 
char c;  
int i; 
while (scanf("%c",&c)!=EOF)
{
    for (int i = 0; i < 48; i++)
    {
        if (c == all[i])
        {
            printf("%c", all[i-1]); 
            break;
        }
        else if (c == ' ')
        {
            printf(" "); 
            break; 
        }
        else if (c=='\n')
        {
            printf("\n"); 
            break; 
        }
        
    }
    
}

return 0;
}