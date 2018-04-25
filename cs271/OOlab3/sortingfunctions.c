#include "sortingfunctions.h"
#include <stdlib.h>

// implement insertionSort
int insertionSort ( int * const data, int size ){
   int i; 
   int j;
   for (i = size; i > 0; i--){
       for (j = size - 1; j > 0; j--){
              if (*(data + j) < *(data + (j - 1))){
                  swap(data + j, data + (j - 1));

              } // end if
       } // end for
   } // end for
   return *data;
} // end selectionSort   

// implement selectionSort
int selectionSort ( int * const data, int size ){
   size_t i;
   int j;
   size_t k;
   for(i = 1; i < size; ++i){
       j = *(data + i);
       k = i;
       while(k > 0 && j < *(data + (k - 1))){
           *(data + k) = *(data + (k - 1));
           k--;
       } // end while 
       *(data + k) = j;
   } // end for  
   return *data;
} // end selectionSort



