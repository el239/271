// CS 271
// Program Name: lab 6
// Author: Evan Lavelle 
// Date: 10/18/17
// Purpose: To extend knowledge of C++ classes

#include "Time.h"

using namespace std;

Time::Time(){
    setHour(0);
    setMinute(0);
    setSecond(0);
} // end default constructor

Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
} // end constructor

void Time::setSecond(int s){
    second = s;
} // end mutator

void Time::setMinute(int m){
    minute = m;
} // end mutator

void Time::setHour(int h){
    hour = h;
} // end mutator
    
int Time::getSecond(){
    return second;
} // end accessor

int Time::getMinute(){
    return minute;
} // end accessor

int Time::getHour(){
    return hour;
} // end accessor

void Time::print(){
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
} // end print

void Time::print12(){
    if (getHour() > 12){
        cout << setfill('0') << setw(2)<< (getHour() - 12) << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << " PM" << endl;
    } // end if
    else{
        cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << " AM" << endl;
    } // end else
} // end print12
