// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Package {
    
friend ostream& operator<< (ostream & O, const Package& P);

public:
    
   Package ( const string &, const string &, const string &, const 
   string &, const string &, const string &, const string &, const string &, 
   const string &, const string &, double = 0.0, double = 0.0);

   Package& setSenderName(const string &);
   string getSenderName() const;
   Package& setSenderAddress(const string &);
   string getSenderAddress() const ;
   Package& setSenderCity(const string &);
   string getSenderCity() const;
   Package& setSenderState(const string &);
   string getSenderState() const;
   Package& setSenderZipCode(const string &);
   string getSenderZipCode() const;
   Package& setRecipientName(const string &);
   string getRecipientName() const;
   Package& setRecipientAddress(const string &);
   string getRecipientAddress() const;
   Package& setRecipientCity(const string &);
   string getRecipientCity() const;
   Package& setRecipientState(const string &);
   string getRecipientState() const;
   Package& setRecipientZipCode(const string &);
   string getRecipientZipCode() const;
   Package& setWeight(double);
   double getWeight() const;
   Package& setCostPerOunce(double);
   double getCostPerOunce() const;
   double calculateCost() const;
   
private:
    
   string senderName;
   string senderAddress;
   string senderCity;
   string senderState;
   string senderZipCode; //return type changed from int; UML specifies string
   string recipientName;
   string recipientAddress;
   string recipientCity;
   string recipientState;
   string recipientZipCode; //return type changed from int; UML specifies string
   double weight;
   double costPerOunce;
};

#endif 
