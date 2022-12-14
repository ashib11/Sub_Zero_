#include <stdio.h>
#include <string.h>
int main()
{
    int arr[20], flag, value,higest=0,second=0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>higest)
        {
            second = higest;
            higest = arr[i]; 
             
        }
        else{
            second = arr[i]; 
        }
    }
    
    value = 0,flag = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 2; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                if (value < arr[i])
                {
                    value = arr[i];
                    flag = 1; 
                }
            }
        }
    }
    if (flag == 0)
    {
        value = second; 
    }
    
    printf("%d\n", value*value);
    return 0;
}