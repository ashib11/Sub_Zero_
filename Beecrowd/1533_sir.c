#include <stdio.h>
int main()
{
   int n;

   while (1)
   {
      scanf("%d", &n);
      int arr[n + 2];
      int pos[n + 2];
      if (n == 0)
      {
         break;
      }
      else
      {
         for (int i = 0; i < n; i++)
         {
            scanf("%d", &arr[i]);
            pos[i] = i;
         }
         for (int i = 0; i < n; i++)
         {
            for (int j = i + 1; j < n; j++)
            {
               if ((arr[i]) < arr[j])
               {
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;

                  int tempo = pos[i];
                  pos[i] = pos[j];
                  pos[j] = tempo;
               }
            }
         }

         printf("%d\n", pos[1] + 1);
      }
   }

   return 0;
}
