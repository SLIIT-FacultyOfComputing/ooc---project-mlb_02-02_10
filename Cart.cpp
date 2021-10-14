//IT21105302
#include <iostream>
#include "Cart.h"
using namespace std;



	Cart::Cart(int pCartID){
		cartID = pCartID;
		cout << "Cart constructor called" << endl;
	}

	void Cart::setDetails(int pQuantity, int pProductID){
		quantity = pQuantity;
		productID = pProductID;
	}
  void Cart::addItem(Item *item1,Item *item2){
    item[0]= item1;
    item[1]= item2;

  }

	int Cart::getCartID(){
		return cartID;
	}

	int Cart::getQuantity(){
		return quantity;
	}

	int Cart::getProductID(){
		return productID;
	}

	void Cart::displayCart(){
		cout << "Cart id :" << cartID<<endl;
    cout <<"    Items   "<<endl;
    for(int i=0;i<2;i++){
     item[i]->displayItemDetails();
    }
	}

	float Cart::updateCart(int pCart, int pQty, int pProd){
		//code
    return 1;
	}

	Cart::~Cart(){
		cout << "Cart destructor called" << endl;
	}
