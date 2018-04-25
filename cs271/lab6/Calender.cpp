// CS 271
// Program Name: lab 6
// Author: Evan Lavelle 
// Date: 10/18/17
// Purpose: To extend knowledge of C++ classes

#include "Date.h"
#include "Time.h"
#include <time.h>
#include <math.h>
#define SIZE 5
#define HOURS 24
#define MINUTES 60
#define SECONDS 60

using namespace std;

main(){
// seed randomizer
srand(time(NULL));
// declare array
Time timesArray[SIZE];

// initialize array objects
for(int i = 0; i < SIZE; i++){
    Time randomTime;
    randomTime.setHour(rand() % HOURS);
    randomTime.setMinute(rand() % MINUTES);
    randomTime.setSecond(rand() % SECONDS);
    timesArray[i] = randomTime;
} // end for    

// call print function
for(int i = 0; i < SIZE; i++){
    timesArray[i].print();
} // end for

// call print12 function
for(int i = 0; i < SIZE; i++){
    timesArray[i].print12();
} // end for

// declare array
Date dateArray[SIZE];
int x,y,z;

// initialize array objects
for(int i = 0; i < SIZE; i++){
    cout << "Enter the month, day, and year seperated by spaces. The date must be within the years 1980-2100(inclusive)." << endl;
    cin >> x >> y >> z;
    dateArray[i].setMonth(x);
    dateArray[i].setDay(y);
    dateArray[i].setYear(z);
} // end for    
cout << endl;

// call print function
for(int i = 0; i < SIZE; i++){
    dateArray[i].print();
} // end for    
cout << endl;

// tests for Time accessors
Time test;
cout << "default time is: " << test.getHour() << " " << test.getMinute() << " " << test.getSecond() << endl; 

// tests for Date accessors
Date test2;
cout << "default date is: " << test2.getMonth() << " " << test2.getDay() << " " << test2.getYear() << endl; 
} // end main
