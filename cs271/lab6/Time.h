#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Time{
    
public: 
    Time();
    Time(const int,const int,const int);
    void setHour(const int);
    void setMinute(const int);
    void setSecond(const int);
    int getHour();
    int getMinute();
    int getSecond();
    void print();
    void print12();
    
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

}; // end class
#endif
