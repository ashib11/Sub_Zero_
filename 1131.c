#include<stdio.h>
int main(){
    int x,T1,T2,count=0,victory=0,loss=0,draw=0; 
while (1)
{
    if (x==2)
    {
        break; 
    }
    else{
        scanf("%d %d",&T1,&T2); 
        printf("Novo grenal (1-sim 2-nao)\n"); 
        scanf("%d",&x); 
        count++; 
        if (T1>T2)
        {
            victory++; 
        }
        if (T2>T1)
        {
            loss++; 
        }
        if(T1==T2){
            draw++; 
        }
    }
}
if (victory>loss)
{
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",count,victory,loss,draw);
}
if (loss>victory)
{
     printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",count,victory,loss,draw);
    
}
if (victory == loss)
{
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n",count,victory,loss,draw);

}


return 0;
}