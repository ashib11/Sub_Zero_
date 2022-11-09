// Your teacher would like to make a program with the following characteristics:

// Read a date in the DD/MM/YY format;
// Print the date in MM/DD/YY format;
// Print the date in the YY/MM/DD format ;
// Print the date in DD-MM-YY format. 

#include<stdio.h>
int main(){
    int d,m,y; 
scanf("%d/%d/%d",&d,&m,&y); 
printf("%02d/%02d/%02d\n",m,d,y);
printf("%02d/%02d/%02d\n",y,m,d);
printf("%02d-%02d-%02d\n",d,m,y);
return 0;
}