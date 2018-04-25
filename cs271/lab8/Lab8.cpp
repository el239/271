// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#include "TwoDayPackage.h"
#include "Package.h"

using namespace std;
    
main(){

// testing default arguments for weight/cost per ounce    
Package regularPackage("Evan Lavelle", "271 Object Street", "Las Cruces", "NM", "86011", "John Doe", "272 Data Road", "Flagstaff", "AZ", "86601");

cout << regularPackage << endl;

// test costPerOunce mutator precondition (should reject negative assignment)
regularPackage.setCostPerOunce(-5.00);
cout << "cost per ounce: " << regularPackage.getCostPerOunce() << endl;

// test default argument mutators
regularPackage.setCostPerOunce(3.50);
regularPackage.setWeight(7.2);

// test calculateCost (and default argument accessors)
double totalCost = regularPackage.calculateCost();
cout << "total cost after setter calls: $" << totalCost << endl;

TwoDayPackage extendedPackage("Michael Ray", "172 Object St.", "Silver City", "NM", "88061", "Plato R.", "272 D Rd.", "Sedona", "AZ", "86011", 10, 8, 6);

cout << extendedPackage << endl;

// test flatFee mutator and accessor
extendedPackage.setFlatFee(12);
cout << "flat fee: " << extendedPackage.getFlatFee() << endl;
//double totalTwoDayCost = ; 

// test calculateCost
cout << "total cost: $" <<  extendedPackage.calculateCost() << endl;
} // end main
