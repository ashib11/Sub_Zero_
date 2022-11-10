#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    // 1 2 3 4 5 6 7
    return 0;
}
void func(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    func(n - 1);
    printf("%d\n",n); 

  
}