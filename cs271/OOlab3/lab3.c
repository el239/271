// CS 271
// Program Name: lab 3
// Author: Evan Lavelle 
// Date: 9/18/17
// Purpose: demonstrate aptitude with pointers

#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"

int main (void) { 
   // dynamically allocate memory space for an array
   int *arrayPtr = (int *) malloc (10 * sizeof(int));
   int x;
   int Array[10]; 
   arrayPtr = &Array[0];
   srand(time(NULL));
   // fill the array with random integers
   fillArray(arrayPtr, 10, 1, 10);
   
   // print the array, 10 elements per line
   neatPrint (arrayPtr, 10, 10, 4);
   
   // sort the array using selection sort
   selectionSort(arrayPtr,10);
   
   // print the array, 10 elements per line
   neatPrint (arrayPtr, 10, 10, 4);

   // fill the array again with random integers
   fillArray(arrayPtr, 10, 1, 10);
   
   // print the array
   neatPrint (arrayPtr, 10, 10, 4);
   
   // sort with insertion sort
   insertionSort(arrayPtr, 10);
   
   // print the array
   neatPrint (arrayPtr, 10, 10, 4);
   
   printf(rand()%2);
} // end main
