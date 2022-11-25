#include<stdio.h>
#include<string.h>
int main()
{
int test_case , len1, len2; 
char str[100], name[100]; 
scanf("%d", &test_case); 

for (int i = 0; i < test_case; i++)
{
   gests(str); 
   gets(name); 
   len1 = strlen(str); 
   len2 = strlen(name); 
   if (len1 != len2)
   {
    printf("No\n"); 
   }
   else{
    
   }
}

return 0;
}