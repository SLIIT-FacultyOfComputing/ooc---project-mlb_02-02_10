//IT21008696
#include<iostream>
#include<cstring>
#include"Seller.h"

using namespace std;

Seller::Seller(const char uName[],const char uNIC[],int pSID):User(uName,uNIC){
  SID=pSID;
}
void Seller::setCredentials(const char pUserName[],const char pPassword[]){
 
}
int Seller::getID(){
 return SID;
}
int Seller::checkCredentials(){
  return 1;
}
void Seller::displayCarDetails(){

}
Seller::~Seller(){
  cout << "Deleting SID" <<SID <<endl;
}