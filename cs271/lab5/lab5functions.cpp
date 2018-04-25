#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

void highTwo(double array[], int size){
    int high, highest, i;
        if (array[1] > array[0]){
            high = array[0];
            highest = array[1];
        } // end if
        else{
            high = array[1];
            highest = array[0];
        } // end else
        for (i = 2; i < size; i++){
            if(array[i] > highest){
                high = highest;
                highest = array[i];
            } // end if
            else if(array[i] > high){
                high = array[i];
            } // end else if
        } // end for   
    cout << "The highest number is " << highest << endl << "The second highest is " << high << endl;    
} // end highTwo
int longestWord(char *cPtr){
    int length = 0, longestLength = 0;
    for (int index = 0; index <= strlen(cPtr); index++){
        if (isalpha(*(cPtr + index))){
            length++;
            if (length > longestLength){
                longestLength = length;
            } // end if
        } // end if
        else{
            length = 0;
        } // end else
    } // end for
    return longestLength;
} // end longestWord
            
       
