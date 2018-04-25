//CS 271
//Program Name: lab2.c
// Date: 9/6/17
// Purpose: demonstrate proficiency in writing functions
// and working with arrays with multiple source files 


int main (void) {	
char array1[] = "11seventest";
char array2[] = "7eleventest";

printCharArray(array1,11);
countLetters(array1,11);
printCharArray(array2,11);
countLetters(array2,11);
numMatches(array1,array2,11);
moveLetters(array1,11);
moveLetters(array2,11);
printCharArray(array1,11);
printCharArray(array2,11);

} // end main
	
