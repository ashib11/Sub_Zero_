#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int len; 
while (fgets(str,1000,stdin))
{
   len = strlen(str)-1; 
   for (int i = 0; i < len; i++)
   {
    if (str[i] == ' ')
    {
         if (str[i+1] != ',' && str[i+1] != '.')
         {
            printf("%c", str[i]); 
         }
         else continue; 
    }
     else printf("%c", str[i]); 
   }
   printf("\n"); 

}

return 0;
}