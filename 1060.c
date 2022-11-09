#include<stdio.h>
int main(){
    float x;
    int count=0;  
for (int i = 1; i <=6; i++)
{
    scanf("%f",&x); 
    if (x>0)
    {
       count = count +1; 
    }
    

}
printf("%d valores positivos\n",count); 

return 0;
}