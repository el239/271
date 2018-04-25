// CS 271
// Program Name: lab 4
// Author: Evan Lavelle 
// Date: 10/2/17
// Purpose: gain more experience with characters and strings

#include <stdio.h>
#include <stdlib.h>

void splitAlpha(const char *original, char *lower, char *upper){
    const char *o = original;
    int l = 0, u = 0;
    int x = 0;

    // check for empty input/end of array
    while (*o != '\0'){
        // check if letter
        if (isalpha(*o)){
            // check case
            if (isupper(*o)){
                *(upper + u) = *o; // append to new string 
                u++;
            } // end if    
            else{
                *(lower + l) = *o; // append to new string
                l++;
            } // end else  
            } // end if
        *o++;
    } // end while
    // terminate new strings w/ null values
    *(upper + u) = '\0';
    *(lower + l) = '\0';
} // end splitAlpha

void printSequences(const char * text){
    int positionDifference;
    const char *p = text;
    
    // check for empty input/end of array
    while (*p != '\0'){
      //  printf("%c",*p);
        // check if number/letter
        if (isalnum(*p)){
            // compare to ASC value of next element
            if (*(p + 1) - *(p) == 1){
                printf("%c", *p);
                // compare to ASC value of element two farther (in order to check for last of sequence)
                if (*(p + 2) - *p != 2){
                    printf("%c\n", *(p + 1));
                } // end if
            } // end if
        } // end if
    p++;    
    } // end while
} // end printSequences
