#include<stdio.h>
int main(){
int n,x,y,mal,add;
char c; 
scanf("%d",&n); 
scanf("%d %c %d",&x,&c,&y); 
mal = x*y;
add = x+y; 
if ((c == '+')&&(add <=n))
{
    printf("OK\n");
   
}

else if ((c=='*')&&(mal <= n))
{
    printf("OK\n");
}
else{
    printf("OVERFLOW\n"); 
}
return 0;
}