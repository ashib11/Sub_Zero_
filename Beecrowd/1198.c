#include<stdio.h>
int main(){
    long long n,o,differnce=0; ; 
     
while (scanf("%lld %lld",&n,&o)!=EOF)
{
    if (n>o)
    {
        differnce = n-o; 
        printf("%lld\n",differnce); 
    }
    else
    {
        differnce = o - n; 
      printf("%lld\n",differnce); 
       
    }
    
}


return 0;
}