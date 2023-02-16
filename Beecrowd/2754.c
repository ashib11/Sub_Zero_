#include<stdio.h>
#include<math.h>
int main(){
double x=234.345,y=45.698; 

printf("%.6lf - %.6f\n",x,y);
printf("%.0lf - %.0f\n",x,y);
printf("%.1lf - %.1f\n",x,y);
printf("%.2lf - %.2f\n",x,y);
printf("%.3lf - %.3f\n",x,y);
printf("%e - %e\n",x,y);
printf("%E - %E\n",x,y);
printf("%g - %g\n",x,y); 
printf("%g - %g\n",x,y); 


return 0;
}