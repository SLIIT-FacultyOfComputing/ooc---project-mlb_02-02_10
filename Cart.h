//IT21105302
#pragma once
#include "Item.h"

class Item;

class Cart{
 private:
	int cartID;
	int quantity;
	int productID;
  Item *item[2];

 public:
	Cart(int pCartID); 
	void setDetails(int pQuantity, int pProductID);
  void addItem(Item *item1,Item *item2);
	int getCartID();
	int getQuantity();
	int getProductID();
	void displayCart();
	float updateCart(int pCart, int pQty, int pProd);
	~Cart();
};