//IT21105302
#pragma once
#include "Order.h"
#include "Seller.h"
#define SIZE3 5

class Order;
class Seller;

class Item{
  private:
    int sellerID;
    char itemCode[6];
    char itemName[20];
    float itemPrice;
    int Quantity;
    Order*ORD[SIZE3];
    

  public:
    Item(const char pItemCode[],const char pItemName[],float pItemPrice);
    void addItem(Seller*Sell);
    void setQuantity(int pQuantity);
    int getQuantity();
    float getPrice();
    void displayItemDetails();
    ~Item();
};