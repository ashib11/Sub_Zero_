#include<stdio.h>
int main(){
    int x,y,ans; 
    while(1){
        scanf("%d %d",&x,&y);
        if (x ==0 && y == 0)
        {
            break; 
        }
        ans = x - (y-x); 
        printf("%d\n",ans); 
    }
}