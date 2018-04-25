// CS 271
// Program Name: lab 6
// Author: Evan Lavelle 
// Date: 10/18/17
// Purpose: To extend knowledge of C++ classes

#include "Date.h"

using namespace std;

Date::Date(){
   day = 1;
   month = 1;
   year = 1980;
} // end default constructor

Date::Date(int d,int m,int y){
   day = d;
   month = m;
   year = y;
} // end constructor

void Date::setDay(int d){
   if (d > 0 && d < 32)
   day = d;
} // end setDay

void Date::setMonth(int m){
   if (m > 0 && m < 13)
   month = m;
} // end setMonth

void Date::setYear(int y){
   if (y > 1979 && y < 2101)
   year = y;
} // setYear

int Date::getDay(){
   return day;
} // end getDay

int Date::getMonth(){
   return month;
} // end getMonth

int Date::getYear(){
   return year;
} // end getYear

void Date::print(){
    cout << setfill('0') << setw(2) << getMonth() << "/" << setw(2) << getDay() << "/" << setw(4) << getYear() << endl;
} // end print
