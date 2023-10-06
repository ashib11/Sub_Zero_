#include<stdio.h>
#include<string.h>
int main()
{
int price, initial, numBan, total_cost=0, loan; 
scanf("%d %d %d", &price, &initial, &numBan); 
for (int i = 1; i <=numBan; i++)
{
    total_cost = total_cost + (price*i); 
}
loan = total_cost - initial; 
if (loan > 0)
{
    printf("%d\n", loan);
}
else printf("0\n"); 
 
return 0;
}