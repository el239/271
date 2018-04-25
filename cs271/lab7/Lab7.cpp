// Program Name: lab7
// Author: Evan Lavelle 
// Date: 10/26/17
// Purpose: Learn about operator overloading
#include <iostream>
#include <iomanip>
#include "Term.h"

using namespace std;

main(){
    Term k(2,3);
    Term r;
    Term t;
    Term s;
    
    // addition test
    cout << "Enter first the coefficient, then the exponent of term r to add to term k (2^3). Non-matching exponents will return 0x^0" << endl;
    cin >> r;
    cout << "The sum of k and r is: " << (k + r) << endl;
    
    // subtraction test
    cout << "Enter first the coefficient, then the exponent of term t to subtract from term k (2^3). Non-matching exponents will return 0x^0" << endl;
    cin >> t;
    cout << "The difference of k and t is: " << k - t << endl;
    
    // multiplication test
    cout << "Enter first the coefficient, then the exponent of term s to multiply by term k (2^3). Non-matching exponents will return 0x^0" << endl;
    cin >> s;
    cout << "The product of k and s is: " << k * s << endl;
    
    // mutator & accessor test with standard io operators 
    cout << "setter/getter test: ";
    k.setCoefficient(5);
    k.setExponent(5);
    cout << k.getCoefficient();
    cout << k.getExponent() << endl;
} // end main
