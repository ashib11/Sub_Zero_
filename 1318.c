#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   
  int n,m,i,j,array[10000000];
  while (scanf("%d %d", &n, &m) && n != 0 && m != 0)
  {
      int c = 0;
      memset(array,0,sizeof(array));

      for(i=0;i<m;++i)
      {
          scanf("%d",&j);
          array[j]++;
        
          if (array[j] == 2)
                c++;
      }
      printf("%d\n",c);
  }
; 
}

