#include<stdio.h>
int main(){
char arr[10][50]; 
for (int i = 0; i < 10; i++)
{
   scanf("%s",&arr[i]); 
}
printf("%s\n%s\n%s\n",arr[2],arr[6],arr[8]); 

return 0;
}