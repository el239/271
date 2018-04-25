// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#include "TwoDayPackage.h"
#include "Package.h"

using namespace std;
    
main(){
    
Package regularPackage("Evan Lavelle", "271 Object Street", "Las Cruces", "NM", "86011",
"John Doe", "272 Data Road", "Flagstaff", "AZ", "86601");

cout << regularPackage << endl;
} // end main
