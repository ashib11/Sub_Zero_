#include<stdio.h>
#include<string.h>
int main()
{
int num,h,person, ans = 0;
scanf("%d %d",&num, &h); 
for (int i = 0; i < num; i++)
{
    scanf("%d",&person); 
    if (person>h)
    {
      ans+=2; 
    }
    else ans+=1; 
}
printf("%d\n",ans); 
return 0;
}