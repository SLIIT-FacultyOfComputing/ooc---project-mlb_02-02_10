//IT21105302
#pragma once
#include "Customer.h"
#include "Item.h"
#include "Payment.h"
#define SIZE2 10

class Customer;
class Item;
class Payment;

class Order{
  public:
    int orderNo;
    float total;
    Customer*Cus;
    Item*ITM[SIZE2];
    Payment*PAID[SIZE2];
  public:
    Order(int pOrderNo,Customer *pCus);
    int getOrderNo();
    float getTotal();
    float calcTotal();
    void displayBill();
    ~Order();
};