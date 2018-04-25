// Program Name: lab7
// Author: Evan Lavelle 
// Date: 10/26/17
// Purpose: Learn about operator overloading

#include "Term.h"

using namespace std;

ostream &operator<<( ostream & O, const Term & T){
   O << T.coefficient << "x^" << T.exponent;
   return O;
} // end operator<<

istream &operator>>(istream & I, Term & T){
   I >> T.coefficient >> T.exponent;
   return I;
} // end operator>>

 Term::Term ( int coef , int exp){
     setCoefficient(coef);
     setExponent(exp);
} // end constructor

void Term::setCoefficient ( int coef){
    coefficient = coef;
} // end mutator

void Term::setExponent (int exp){
    exponent = exp;
} // end mutator

int Term::getCoefficient() const{
    return coefficient;
} // end accessor

int Term::getExponent() const{
    return exponent;
} // end accessor


Term Term::operator+ (const Term &T) const {
    // checks if exponent values match
    if (this->exponent != T.exponent){
        return Term (0,0);
    } // end if
     return Term((T.coefficient + this->coefficient), T.exponent);
} // end operator+

Term Term::operator- (const Term & T) const {
    // checks if exponent values match
    if (this->exponent != T.exponent){
        return Term (0,0);
    } // end if
    // if they match, add coefficients
    return Term((this->coefficient - T.coefficient), T.exponent);
} // end operator-

Term Term::operator* (const Term & T) const {
    // multiply coefficients, add exponents
    return Term((this->coefficient * T.coefficient), (this->exponent + T.exponent));
} // end operator+
