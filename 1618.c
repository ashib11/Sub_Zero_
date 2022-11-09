#include<stdio.h>
int main(){
int numberCase,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Rx,Ry; 
scanf("%d",&numberCase); 
 
for (int i = 1; i <=numberCase; i++)
{
    scanf("%d %d %d %d %d %d %d %d %d %d",&Ax,&Ay,&Bx,&By,&Cx,&Cy,&Dx,&Dy,&Rx,&Ry);
    if (Rx>=Ax && Ry>=Ay)
    {
       if (Rx<=Cx && Ry<=Cy)
       {
       printf("1\n");
       }
       else{
        printf("0\n"); 
       }
    }
    else{
        printf("0\n"); 
    }
}

return 0;
}
