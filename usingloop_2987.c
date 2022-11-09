#include<stdio.h>
int main()
{
    char ch;
    int i,j,k=0;
    scanf("%c",&ch);
    for(i=1,j=65; i<26; i++,j++)
    {
       

            if(ch == j)
            {
                k =i; 
                break;
            }
        
    }
         printf("%d\n",k);        
    return 0;
}