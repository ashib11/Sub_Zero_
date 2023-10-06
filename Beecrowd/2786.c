#include<stdio.h>
#include<string.h>
int main()
{
int len, wid,type1,type2; 
scanf("%d %d",&len,&wid); 
type1 = ((wid*len) + ((wid-1)*(len-1))); 
type2 = 2*((wid-1) + (len-1)); 
printf("%d\n%d\n", type1, type2); 
return 0;
}