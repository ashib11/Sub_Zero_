// Your teacher would like to make a program with the following characteristics:

// Create two variables to store real numbers of simple precision;
// Create two variables to store double precision real numbers;
// Read the first simple precision number that will always have a decimal;
// Read the second simple precision number that will always have two decimal places;
// Read the first double precision number that will always have three decimal places;
// Read the second double precision number that will always have four decimal places;
// Print the letter A, a blank, the equals sign, a blank, the number stored in the first variable read in step 3, a comma, a blank, the letter B, a blank, the sign of equal, a space, the number stored in the second variable read in step 4. Do not forget to skip line;
// Print the letter C, a blank, the equal sign, a blank, the number stored in the first variable read in step 5, a comma, a blank, the letter D, a blank, the sign of equal, a space, the number stored in the second variable read in step 6. Do not forget to skip line;
// Repeat procedure 7, printing the numbers with one decimal place;
// Repeat procedure 8, printing the numbers with one decimal place;
// Repeat procedure 7, printing the numbers to two decimal places;
// Repeat procedure 8, printing the numbers to two decimal places;
// Repeat procedure 7, printing the numbers to three decimal places;
// Repeat procedure 8, printing the numbers to three decimal places;
// Repeat procedure 7, printing the numbers to three decimal places and in the form of scientific notation with the character E;
// Repeat procedure 8, printing the numbers to three decimal places and in the form of scientific notation with the character E;
// Repeat procedure 7, printing only the whole part of the number;
// Repeat procedure 8, printing only the entire part of the number.

#include <stdio.h>
// #include <math.h>
int main()
{
    float a, b;
    double c, d;
    scanf("%f %f", &a, &b);
    scanf("%lf %lf", &c, &d);
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", a, b, c, d);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", a, b, c, d);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", a, b, c, d);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", a, b, c, d);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", a, b, c, d);
    printf("A = %.f, B = %.f\nC = %.lf, D = %.lf\n", a, b, c, d);

    return 0;
}