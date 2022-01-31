//IT21008696
#pragma once

#include "User.h"
#include "Cart.h"
#include "Order.h"
#define SIZE5 5

class Cart;
class Order;

class Customer:public User{
  private:
    Cart *cart[1];
    int CID;
    char userName[30];
    char passWord[15];
    Order*ORD[SIZE5];
    int noOfOrders;
    

  public:
    Customer();
    Customer(const char uName[],const char uNIC[],int pCID);
    void setCredentials(char pUserName[], char pPassword[]);
    int getCID();
    int checkCredentials();
    void addOrder(Order *O);
    void displayCartDetails();
    ~Customer();
};

