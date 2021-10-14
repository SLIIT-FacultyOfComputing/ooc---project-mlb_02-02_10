//IT21111488
#include <iostream>
#include <cstring>
#include "PromotionCode.h"
using namespace std;


PromotionCode::PromotionCode(){
		cout<< "";
}

void PromotionCode::createCode(int pCodeID,Seller*sell){
		codeID = pCodeID;
    sellerID = sell->getID();
}

int PromotionCode::getPromoCode(){
		return codeID;
}

PromotionCode::~PromotionCode(){
	cout << "PromotionCode deleted" <<endl;
}