#include<stdio.h>
#include<string.h>
int main()
{
int test_case, p,v,t, sum = 0, count=0;
scanf("%d",&test_case);  

for (int i = 0; i < test_case; i++)
{
   scanf("%d %d %d", &p,&v,&t); 
  sum = p + v + t; 
  if (sum>1)
  {
    count++; 
  }
  


}
printf("%d\n", count);

return 0;
}