//IT21111488
#include "Payment.h"
#include <cstring>
#include <iostream>

using namespace std;

Payment::Payment(const char pCardType[]){
  strcpy(cardType, pCardType);
}
void Payment::setCardDetails(const char pHolderName[],long int pCardNumber, int pCVV){
  strcpy(holderName,pHolderName);
  cardNumber = pCardNumber;
  CVV = pCVV;
}
void Payment::displayCardDetails(){
  cout << "Card Type : " <<cardType <<endl;
  cout << "Holder Name : " << holderName << endl;
}
long int Payment::getCardNum(){
  return cardNumber;
}
int Payment::getCVV(){
  return CVV;
}
Payment::~Payment(){
  cout << "Deleting payment " <<endl;
  
}