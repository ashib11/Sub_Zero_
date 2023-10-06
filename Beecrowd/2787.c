#include<stdio.h>
int main(){
int r,c, x,y;
scanf("%d %d",&r,&c); 
x = r +c; 
if (x%2==0)
{
    printf("1\n");
}
else{
    printf("0\n"); 
}

return 0;
}