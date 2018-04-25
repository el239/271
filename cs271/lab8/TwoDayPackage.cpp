// Program Name: lab8
// Author: Evan Lavelle 
// Date: 11/10/17
// Purpose: Apply concepts of inheritence

#include "TwoDayPackage.h"

using namespace std;

ostream &operator<<( ostream & O, const TwoDayPackage& P){
   O << "\n" << "Sender:\n" << P.getSenderName() << "\n" << 
   P.getSenderAddress() << "\n" << P.getSenderCity() << ", " << P.getSenderState() << " " <<  
   P.getSenderZipCode() << "\n\n" << "Recipient:\n" << P.getRecipientName() << "\n" << 
   P.getRecipientAddress() << "\n" << P.getRecipientCity() << ", " << P.getRecipientState() << " " << P.getRecipientZipCode() << "\n\n" << "Weight: " << std::fixed << std::setprecision(1) << P.getWeight() << " oz." << " Cost per ounce: $" << std::fixed << std::setprecision(2) << P.getCostPerOunce() << "\n";
   return O;
} // end operator<<

TwoDayPackage::TwoDayPackage (const string & sName, const string & sAddress, const string & sCity, const string & sState, const string & sZip, const string & rName, const string & rAddress, const string & rCity, const string & rState, const string & rZip, double theFlatFee, double theWeight, double theCost)
:Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, theWeight, theCost){
setFlatFee(theFlatFee); 
} // end constructor

TwoDayPackage& TwoDayPackage::setFlatFee(double theFlatFee){
    if (theFlatFee > 0){
    flatFee = theFlatFee;
    } // end if
    return *this;
} // end setFlatFee

double TwoDayPackage::getFlatFee()const{
    return flatFee;
} // end getFlatFee

double TwoDayPackage::calculateCost()const{
    return (getCostPerOunce() * getWeight()) + flatFee;
} // end calculate Cost
