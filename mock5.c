#include<stdio.h>
#include<string.h>
int main()
{
int ball, remain, over,n; 
scanf("%d",&ball); 
remain = 300-ball; 
if (remain<6)
{
    printf("0 over and %d ball reaminaing\n", remain); 
}
else{
    over = remain / 6; 
    n = remain  % 6; 
    printf("%d over and %d ball remaining\n", over, n); 
}

return 0;
}