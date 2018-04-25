// BankAccount.cpp 
// Function definitions file for the BankAccount class

// this is a C++ program

#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

// Implementation of the BankAccount class 
// contains member function definitions

   // default constructor
   BankAccount::BankAccount(){
     setFirstName("");
     setLastName("");
     setAccountNumber(0);
   } // end constructor

   BankAccount::BankAccount( string f, string l, int n ){
     setFirstName(f);
     setLastName(l);
     setAccountNumber(n);
   } // end constructor

   void BankAccount::setFirstName( string f ) {
     firstName = f;
   }

   void BankAccount::setLastName( string l ) {
     lastName = l;
   }

   void BankAccount::setAccountNumber ( int n ) {
     accountNumber = n;
   }
   string BankAccount::getFirstName( ) {
      return firstName;
   }

   string BankAccount::getLastName( ) {
      return lastName;
   }

   int BankAccount::getAccountNumber ( ) {
      return accountNumber;
   }
   
   void BankAccount::display( ){
       cout << "Customer: " << getFirstName() << " " << getLastName() << endl << "Account:  " << getAccountNumber() << endl;
   } // end display    
