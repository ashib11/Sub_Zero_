 #include<stdio.h>
int main(){
int c,count=1,a=1; 
while (1)
{
    scanf("%d",&c); 
    if (c==EOF)
    {
        break; 
    }
    for (int i = 0; i < c; i++)
    {
        count++; 
    }
    printf("Caso %d: %d numero\n",a++,count); 
}

return 0;
}