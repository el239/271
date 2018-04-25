// CS 271
// Program Name: program1.c
// Autho/: Evan Lavelle
// Date:/08/21/17
// Purpose:To calculate the hypotenuse of a triangle


#include <stdio.h>
#include <math.h>

int main (void) {
   double leg1, leg2, hypotenuse;
   // input the lengths of leg1 and leg2
   printf("Enter the length of side A\n");
   scanf("%lf", &leg1);
   printf("\nEnter the length of side B: \n");
   scanf("%lf", &leg2);
   // calculate the hypotenuse
   hypotenuse = sqrt( leg1 * leg1 + leg2 * leg2 );
   // display the length of the hypotenuse with 2 decimal places
   printf("The hypotenuse is %.2f\n", hypotenuse);
} // end main function
