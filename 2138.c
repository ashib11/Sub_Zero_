#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "0123456789";
    char input[20001];
    int lenght;
    int arr[10];
    while ((scanf("%s", input) != EOF))
    {
        int arr[10] = {0};
        lenght = strlen(input);
       

        for (int i = 0; i < 10; i++) 
        {

            for (int j = 0; j < lenght; j++)

            {
                if (i == input[j] - 48)
                {
                    arr[i]++;
                }
            }
        }
        int index = 0;
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