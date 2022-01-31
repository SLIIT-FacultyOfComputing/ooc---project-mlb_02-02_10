//IT21105302
#include<iostream>
#include<cstring>
#include"Item.h"

using namespace std;

Item::Item(const char pItemCode[],const char pItemName[],float pItemPrice){
  strcpy(itemCode, pItemCode);
  strcpy(itemName, pItemName);
  itemPrice = pItemPrice;
}
void Item::addItem(Seller*Sell){ 
  sellerID= Sell->getID();
}
void Item::setQuantity(int pQuantity){
  Quantity=pQuantity;
}
int Item::getQuantity(){
 return Quantity;
}
float Item::getPrice(){
     return itemPrice;
}
void Item::displayItemDetails(){
 cout<< "Description of Item " << itemCode << endl<<endl;
 cout << "Item Name : "<< itemName << endl;
 cout << "Price : Rs."<< itemPrice << endl;
 cout << "Available quantity : "<< Quantity << endl;
 cout << "SellerID : "<< sellerID << endl<< endl<<endl;

}
Item::~Item(){
  cout <<"Item ID Deleted" << itemCode <<endl;
}