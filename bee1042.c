#include<stdio.h>
int main(){
int x,y,z,first,second,last; 
scanf("%d %d %d",&x,&y,&z); 
if (x>y)
{
    if ((x>z)&&(y>z))
    {
        first = x; 
        second = y; 
        last = z; 
    }
    if ((x>z)&&(z>y))
    {
        first = x; 
        second = z; 
        last = y; 
    }
    else if ((x<z)&&(y<x)) 
    {
       first = z; 
        second = x; 
        last = y; 
    }
    else if ((x<z)&&(y>x)) 
    {
       first = z; 
        second = y; 
        last = x; 
    }
    
    
}

return 0;
}