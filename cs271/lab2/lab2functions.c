// CS 271
// Program Name: makefile
// Date: 9/6/17
// Purpose: demonstrate proficiency in writing functions
// and working with arrays with multiple source files 

#include "lab2functions.h"
#include "ctype.h"
#include "string.h"
#include "stdio.h"

// print character array in specified format
void printCharArray(char*array,int w){
   int i;	
   for (i = 0; i < w;){
      printf("%2c",array[i]);
      i ++;
      if (i % 10 == 0){
      printf("\n");
      } // end if
   } // end for
   printf("\n");
} // end print CharArray

// shift letters in array to the front while maintaining letter order
char* moveLetters(char*array,int x){
   int i;
   int j;
   int temp;
   for (i = x; i > 0; i--){
       for (j = x; j > 0; j--){
          if (isalpha(array[j])){
              if (isalpha(array[j-1]) == 0){
                  temp = array[j];
                  array[j] = array[j-1];
                  array[j-1] = temp;
              } // end if
          } // end if
       } // end for
   } // end for
   return array;
} // end move Letters

// provide the number of letters present in string
void countLetters(char*array,int y){
   int count = 0;
   int i;
   for (i = 0; i < y; i++){
      if (isalpha (array[i])){
         count += 1;
      } // end if
    } // end for 
   printf("Number of letters in string is: ");
   printf("%d",count);
   printf("\n");
} // end countLetters

// provide the number of characters shared by like positions of two arrays
void numMatches(char*firstarray,char*secondarray,int z){
   int match = 0;
   int i;
   for (i = 0; i < z; i++){
      if (firstarray[i] == secondarray[i]){
      match += 1;
      } // end if
   } // end for match;
   printf("Number of matches between strings is: ");
   printf("%d",match);
   printf("\n");
} // end numMatches

