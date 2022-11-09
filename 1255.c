#include <stdio.h>
#include <string.h>
int main()
{
   int test_case;
   scanf("%d", &test_case);
   getchar();
   char ch;
   char str[] = "abcdefghijklmnopqrstuvwxyz";
   int count;
   for (int k = 0; k < test_case; k++)
   {
      int arr[100] ={0}, highest[10] = {0};
      
      while (1)
      {
         scanf("%c", &ch);

         if (ch == '\n')
         {
            break;
         }
         if (ch>= 65 && (ch < 97)) 
         {
            ch = ch + 32;
         }

         for (int i = 0; i < 26; i++)
         {
            if (ch == str[i])
            {
               arr[i] += 1;
            }
         }
      }

      highest[0] = arr[0];

      for (int j = 0; j < 26; j++)
      {

         if (highest[0] <= arr[j])
         {

            highest[0] = arr[j];
         }
      }
      for (int m = 0; m < 26; m++)
      {
         if (highest[0] == arr[m])
         {
            printf("%c", str[m]);
         }
      }
      printf("\n");
   }

   return 0;
}