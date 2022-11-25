#include<stdio.h>
#include<string.h>
int main()
{
int test_case; 
scanf("%d", &test_case); 
for (int i = 0; i < test_case; i++)
{
    int x,y,z; 
    scanf("%d %d %d", &x, &y, &z); 
    if (x>y && x>z && y>z)
    {
        printf("%d\n", y); 
    }
    else if (y>x && y>z && x>z)
    {
        printf("%d\n",x);
    }
    else if (z>x && z<y && x<y)
    {
        printf("%d\n", z);
    }
     
}

return 0;
}