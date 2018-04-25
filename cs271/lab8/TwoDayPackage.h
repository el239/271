// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <iomanip>
#include "Package.h"
#include <string>

using namespace std;

class TwoDayPackage : public Package{

friend ostream& operator<<(ostream & O, const TwoDayPackage& P);
    
public:
    
   TwoDayPackage(const string &, const string &, const string &, const 
   string &, const string &, const string &, const string &, const string &, 
   const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

   TwoDayPackage & setFlatFee( double );
   double getFlatFee() const;
   double calculateCost() const;

private:
    
   double flatFee;
};

#endif
