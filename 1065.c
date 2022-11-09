#include<stdio.h>
int main(){
    int x;
    int count=0;  
for (int i = 1; i <6; i++)
{
    scanf("%d",&x); 
    if (x%2==0)
    {
       count = count +1; 
    }
    

}
printf("%d valores pares\n",count); 

return 0;
}