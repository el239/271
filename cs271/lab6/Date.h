#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <iostream>
#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date{
    
public: 
   Date();
   Date(const int,const int,const int);
   void setDay(const int);
   void setMonth(const int);
   void setYear(const int);
   int getDay();
   int getMonth();
   int getYear();
   void print();
    
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

}; // end class
#endif
