#include<stdio.h>
int main(){
int T, N[1000],j=0;
scanf("%d",&T); 
for (int i = 0; i < 1000; i++)
{
    printf("N[%d] = %d\n",i,j++);
    if (j==T)
    {
        j=0; 
    }
    

}


return 0;
}