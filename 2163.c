#include <stdio.h>
int main()
{
    int n, m,a=0,b=0;
    scanf("%d %d", &n, &m);
    int arr[n][m]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (arr[i][j] == 42)
            {
                if ((arr[i - 1][j - 1]) == 7 && (arr[i - 1][j]) == 7 && (arr[i - 1][j + 1])==7)
                {
                    if ((arr[i][j - 1]) == 7 && (arr[i][j + 1])==7)
                    {
                        if ((arr[i + 1][j - 1]) == 7 && (arr[i + 1][j]) == 7 && (arr[i + 1][j + 1])==7)
                        {
                            a = i+1; 
                            b = j + 1; 
                        }
                      
                    }
                    
                }
              
            }
            
        }
    }
    printf("%d %d\n",a,b); 

    return 0;
}