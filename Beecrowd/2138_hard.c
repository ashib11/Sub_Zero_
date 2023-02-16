#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "0123456789";
    char input[10001];
    int lenght;
    
    while ((scanf("%s", input) != EOF))
    {
        int arr[10] = {0,0,0,0,0,0,0,0,0,0}; 
        lenght = strlen(input);
        for (int i = 0; i < lenght; i++)
        {
            if (input[i] == '0')
            {
                arr[0]++;
            }
            else if (input[i] == '1')
            {
                arr[1]++;
            }
            else if (input[i] == '2')
            {
                arr[2]++;
            }
            else if (input[i] == '3')
            {
                arr[3]++;
            }
            else if (input[i] == '4')
            {
                arr[4]++;
            }
            else if (input[i] == '5')
            {
                arr[5]++;
            }
            else if (input[i] == '6')
            {
                arr[6]++;
            }
            else if (input[i] == '7')
            {
                arr[7]++;
            }
            else if (input[i] == '8')
            {
                arr[8]++;
            }
            else if (input[i] == '9')
            {
                arr[9]++;
            }
        }
        int index =0 ;
        for (int i = 0; i < 10; i++)
        {
            if (arr[0] <= arr[i])
            {
                arr[0] = arr[i];
                index = i;
            }
        }
        printf("%d\n", index);
    }

    return 0;
}