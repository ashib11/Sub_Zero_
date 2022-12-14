#include<stdio.h>
#include<string.h>
int main()
{
int notes[10] = {100,20,10,5,1}; 
int money, count=0 ,n; 
scanf("%d",&money); 
for (int i = 0; i < 5; i++)
{
    if (money/notes[i]!=0)
    {
        count+=money/notes[i]; 
      money = money % notes[i]; 
       
    } 
}
printf("%d\n", count); 
return 0;
}