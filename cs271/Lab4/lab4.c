// CS 271
// Program Name: lab 4
// Author: Evan Lavelle 
// Date: 10/2/17
// Purpose: gain more experience with characters and strings

#include <stdio.h>

int main (void){
    char testArray[] = {"The symbol for Intel is INTC."};
    char *theLower = malloc (80);
    char *theUpper = malloc (80);
    printf("\n");
    const char *testArrayPtr = testArray; 
    printf("%s\n",testArrayPtr); //pointer test
    splitAlpha(testArrayPtr, theLower, theUpper); // function test, printed from main
    printf("Lowercase array: %s\n",theLower);
    printf("Uppercase array%s\n",theUpper);
    printf("\n");
    char sequence[] = {"abk123@XY"};
    const char *sequencePtr = sequence;
    printf("%s\n", sequencePtr); // pointer test
    printf("Sequences are:\n");
    printSequences(sequence); // function test, printed from function
    printf("\n");
} // end main
