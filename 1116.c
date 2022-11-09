#include<stdio.h>
int main(){
    int n; 
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{   

    float x,y,d; 
    scanf("%f %f",&x,&y);
    if (y==0)
    {
        printf("divisao impossivel\n");
         
    }
    
    else{
        d = x/y; 
        printf("%.1f\n",d); 
    }
    
}
 
return 0;
}