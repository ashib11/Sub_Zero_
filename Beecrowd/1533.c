#include <stdio.h>
int main()
{
    int n;
    int max=0,second_max=0,pos; 
    while (1)
    {
        scanf("%d", &n);
        int arr[n+1]; 
        if (n==0)
        {
            break; 
        }
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            if (arr[i]>max)
            {
                max = arr[i]; 
            }
             
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i]>second_max) && arr[i]!=max)
            {
                second_max = arr[i]; 
                pos  = i; 
            }
            
        }
        printf("%d\n",pos+1); 
         
    }

    return 0;
}