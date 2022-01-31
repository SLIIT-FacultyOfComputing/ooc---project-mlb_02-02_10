//IT21008696
#include<iostream>
#include<cstring>
#include"Customer.h"


using namespace std;


Customer::Customer(const char uName[],const char uNIC[],int pCID):User(uName,uNIC){
  CID=pCID;
  Cart *cart[1];
  cart[0] = new Cart(1);
}
void Customer::setCredentials(char pUserName[], char pPassword[]){
 
}
int Customer::getCID(){
  return CID;
}
int Customer::checkCredentials(){
  return 1;
}
void Customer::addOrder(Order *O)
{
        if (noOfOrders < SIZE5)
           ORD[noOfOrders] = O;
        noOfOrders++;
}
void Customer::displayCartDetails(){
  
  
  }
Customer::~Customer(){
  cout << "Deleting Customer "<< CID << endl;
  delete cart[0];
  cout << "The end"<< endl ;
}
