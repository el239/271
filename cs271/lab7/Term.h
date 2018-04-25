// Program Name: lab7
// Author: Evan Lavelle 
// Date: 10/26/17
// Purpose: Learn about operator overloading


#ifndef TERM_H
#define TERM_H
#include <iostream>
#include <iomanip>

using namespace std;

class Term{
    
friend ostream &operator<<( ostream &, const Term & );
friend istream &operator>>( istream &, Term & );

private:
   int coefficient;
   int exponent;

public:
   Term ( int coef = 0, int exp = 0);
   void setCoefficient ( int );
   void setExponent ( int );
   int getCoefficient() const;
   int getExponent() const;
   Term operator+ (const Term & ) const;
   Term operator- (const Term & ) const;
   Term operator* (const Term & ) const;
};

#endif
