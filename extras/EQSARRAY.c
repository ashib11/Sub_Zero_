#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, size, value, sum;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &size, &value);
        sum = size + value; 
        int arr[size], flag = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[j]);
            
        }
       if (size>=value)
       {
        printf("Yes\n"); 
       }
       else printf("No\n"); 
       
    }

    return 0;
}