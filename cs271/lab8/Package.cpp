// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#include "Package.h"

using namespace std;

ostream &operator<<( ostream & O, const Package& P){
   O << "\n" << "Sender:\n" << P.senderName << "\n" << 
   P.senderAddress << "\n" << P.senderCity << ", " << P.senderState << " " <<  
   P.senderZipCode << "\n\n" << "Recipient:\n" << P.recipientName << "\n" << 
   P.recipientAddress << "\n" << P.recipientCity << ", " << P.recipientState << " " << P.recipientZipCode << "\n\n" << "Weight: " << std::fixed << std::setprecision(1) << P.weight << " oz." << " Cost per ounce: $" << std::fixed << std::setprecision(2) << P.costPerOunce << "\n";
   return O;
} // end operator<<

Package::Package(const string & sName, const string & sAddress, const string & sCity, const string & sState, const string & sZip, const string & rName, const string & rAddress, const string & rCity, const string & rState, const string & rZip, double theWeight, double theCost){
   setSenderName(sName);
   setSenderAddress(sAddress);
   setSenderCity(sCity);
   setSenderState(sState);
   setSenderZipCode(sZip);
   setRecipientName(rName);
   setRecipientAddress(rAddress);
   setRecipientCity(rCity);
   setRecipientState(rState);
   setRecipientZipCode(rZip);
   weight = theWeight;
   costPerOunce = theCost;
   //setWeight(theWeight);
   //setCostPerOunce(theCost);
} // end constructor
    
Package& Package::setSenderName(const string & sName){
   senderName = sName;
} // end setSenderName

string Package::getSenderName() const{
   return senderName;
} // end setSenderName

Package& Package::setSenderAddress(const string & sAddress){
   senderAddress = sAddress;
} // end setSenderAddress

string Package::getSenderAddress() const{
   return senderAddress;
} // end getSenderAddress

Package& Package::setSenderCity(const string & sCity){
   senderCity = sCity;
} // end setSenderCity

string Package::getSenderCity() const{
   return senderCity;
} // end getSenderCity

Package& Package::setSenderState(const string & sState){
   senderState = sState;
} // end setSenderState

string Package::getSenderState() const{
   return senderState;
} // end getSenderState

Package& Package::setSenderZipCode(const string &sZip){
   senderZipCode = sZip;
} // end setSenderZipCode

string Package::getSenderZipCode() const{
   return senderZipCode;
} // 

Package& Package::setRecipientName(const string & rName){
   recipientName = rName;
} // end setRecipientName
    
string Package::getRecipientName() const{
   return recipientName;
} // end getRecipientName

Package& Package::setRecipientAddress(const string & rAddress){
   recipientAddress = rAddress;
} // end setRecepientAddress

string Package::getRecipientAddress() const{
   return recipientAddress;
} // end getReipientAddress

Package& Package::setRecipientCity(const string & rCity){
   recipientCity = rCity;
} // end setRecipientCity

string Package::getRecipientCity() const{
   return recipientCity;
} // end getRecipientCity

Package& Package::setRecipientState(const string & rState){
   recipientState = rState;
} // end setRecipientState

string Package::getRecipientState() const{
   return recipientState;
} // end getRecipientState

Package& Package::setRecipientZipCode(const string & rZip){
   recipientZipCode = rZip;
} // end setRecipientZipCode

string Package::getRecipientZipCode() const{
   return recipientZipCode;
} // end getRecipientZipCode

Package& Package::setWeight(double theWeight){
   if (theWeight > 0){
   weight = theWeight;
   } // end if
   return *this;
} // end setWeight

double Package::getWeight() const{
   return weight;
} // end getWeight

Package& Package::setCostPerOunce(double theCost){
   if (theCost > 0){
   costPerOunce = theCost;
   } // end if
   return *this;
} // end setCostPerOunce

double Package::getCostPerOunce() const{
   return costPerOunce;
} // end getCostPerOunce

double Package::calculateCost() const{
   return getCostPerOunce() * getWeight();
} // end calculateCost
    
    
    
    
    
