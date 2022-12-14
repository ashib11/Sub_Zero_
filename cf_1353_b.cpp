#include<bits/stdc++.h>
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
int main()
{
    int test_case, size, move, sum=0,count=0;
    int a[200], b[200];
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int temp,temp_b;
        scanf("%d %d", &size, &move);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size ; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                 if (b[i] > b[j])
                {
                    temp_b = b[i];
                    b[i] = b[j];  
                    b[j] = temp_b;
                }
            }
        }
       for (int i = 0; i < size; i++)
       {
            printf("i = %d\nj= %d\n",a[i],b[i]); 
       }
       
        for (int i = 0; i < move; i++)
        {
           if (a[i]<b[size-1-i])
           {
                a[i] = b[size-1-i]; 
                count++; 
           }
          
           
        }
        sum = 0; 
        for (int i = 0; i < size; i++)
        {
           
           sum+=a[i]; 
        

        }
        printf("%d\n",sum); 
    }
   
    return 0;
}