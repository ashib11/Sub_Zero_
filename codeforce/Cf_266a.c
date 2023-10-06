#include<stdio.h>
#include<string.h>
int main()
{
int size, count =0; 
scanf("%d", &size); 
getchar(); 
char str[size]; 
fgets(str,100,stdin); 
for (int i = 0; i < size; i++)
{
    if (str[i] == str[i+1])
    {
        count ++; 
    }
    
}
printf("%d\n", count); 
return 0;
}