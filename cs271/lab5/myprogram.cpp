// CS 271
// Program Name: lab 5 pt.1 
// Author: Evan Lavelle 
// Date: 10/9/17
// Purpose: introduction with C++ classes

#include <iostream>
#include <cstring>
#include <iomanip>
#include "lab5functions.h"

using namespace std;

// function prototypes
void highTwo(double array[], int size);
int longestWord(char *cPtr);

int main(){
    double inputedArray[80]; // allocate memory
    int i = 0;
    int length = 1;
    double input;
    cout << "Enter an integer value (-99 to stop):" << endl; // introduce sentinel
    cin >> input;
        while(input != -99){ 
            inputedArray[i] = input;  
            cout << "Enter an integer value (-99 to stop):" << endl;
            cin >> input;
            length++;
            i++;
        } // end while      
    highTwo(inputedArray,length); // function call
    
    cin.ignore();
    char sentence[80]; // allocate memory
    cout << "Enter a sentence (letters only):" << endl; 
    cin.getline(sentence,80); // fetches whole line
    char *sentencePtr = sentence; // creates pointer for function call
    int result = longestWord(sentencePtr); // function call
    cout << "The length of the longest word is: " << result << endl; // output
} // end main

void highTwo(double array[], int size){
    double high, highest; // initialized to first two values
    int i;
        if (array[1] > array[0]){
            high = array[0];
            highest = array[1];
        } // end if
        else{
            high = array[1];
            highest = array[0];
        } // end else
        for (i = 2; i < size; i++){ // continue comparisons from the third value
            if(array[i] > highest){
                high = highest; // bumps down highest
                highest = array[i]; // replaces highest
            } // end if
            else if(array[i] > high){
                high = array[i]; // replaces high
            } // end else if
        } // end for   
    cout << "The highest number is " << highest << endl << "The second highest is " << high << endl; // output
} // end highTwo
int longestWord(char *cPtr){
    int length = 0, longestLength = 0;
    for (int index = 0; index <= strlen(cPtr); index++){
        if (isalpha(*(cPtr + index))){ // counts each word
            length++;
            if (length > longestLength){
                longestLength = length; // stores largest word
            } // end if
        } // end if
        else{
            length = 0; // resets count after each word
        } // end else
    } // end for
    return longestLength;
} // end longestWord


