// CS 271
// Program Name: lab 5 pt. 2
// Author: Evan Lavelle 
// Date: 10/9/17
// Purpose: introduction with C++ classes

//#include <iostream>
//#include <iomanip>
#include "BankAccount.h"

using namespace std;

int main(){
    BankAccount EvChecking( "Evan", "Lavelle", 5678 );
    EvChecking.display();
    
    BankAccount joesChecking; // check default constructor
    cout << joesChecking.getFirstName() << " " << joesChecking.getLastName() << " " << joesChecking.getAccountNumber() << endl;
    
    // test setters
    joesChecking.setFirstName("Joe");
    joesChecking.setLastName("Smith");
    joesChecking.setAccountNumber(1234);

    // test getters
    cout << joesChecking.getFirstName() << " " << joesChecking.getLastName() << " " << joesChecking.getAccountNumber() << endl;
} // end main
