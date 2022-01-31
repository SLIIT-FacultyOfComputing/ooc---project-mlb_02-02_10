//IT21105302
#include<iostream>
#include<cstring>
#include"Order.h"

using namespace std;

Order::Order(int pOrderNo,Customer *pCus){
  orderNo = pOrderNo;
  Cus = pCus;
  Cus -> addOrder(this);
}
int Order::getOrderNo(){
  return orderNo;
}
float Order::getTotal(){
  return 1;
}
float Order::calcTotal(){
  return 1;
}
void Order::displayBill(){
 cout << "Order ID :"<< orderNo <<endl;
 cout << "Customer ID "<< Cus->getCID()<<endl<<endl;
}
Order::~Order(){
  
}