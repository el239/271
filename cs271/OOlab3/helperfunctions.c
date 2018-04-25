#include "helperfunctions.h"
#include "time.h"

// swap elements
void swap ( int * num1, int * num2 ){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
} // end swap

// fill the array with random integers
void fillArray( int * const arrayPtr, int size, int min, int max ){
   int x;
   //srand(time(NULL));
   for (x = 0; x < size; x++)
       *(arrayPtr + x) = (rand() % (max-min + 1))+ min;
} // end fillArray

// print the array, 10 elements per line
void neatPrint ( int * const arrayPtr, int size, int numPerLine, int fieldSize){
   int x;
   int count;
   printf("Contents of the array: \n\n");
   for (x = 0; x < size; x++){
      printf("%*d",fieldSize, *(arrayPtr + x));
      count++; 
      if (count == numPerLine){
         printf("\n");  
         count = 0;    
      } // end if
   } // end for
   printf("\n");
} // end neatPrint
