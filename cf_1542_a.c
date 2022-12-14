#include<stdio.h>
#include<string.h>
int main()
{
int test_case,size,n,even,odd; 
scanf("%d", &test_case); 
for (int i = 0; i < test_case; i++)
{
    even = 0, odd=0; 
    scanf("%d",&size);
    for (int j = 0; j < (2*size); j++)
    {
        scanf("%d", &n);
        if (n%2==0)
        {
            even+=1; 
        }
        else{
            odd+=1; 
        }
    }
    if (even == odd)
    {
        printf("Yes\n");
    }
    else printf("No\n"); 
    
}

return 0;
}