//IT21111488
#pragma once
#include "Seller.h"


class PromotionCode{
  private:
    int sellerID; 
    int codeID;
    char expireDate[10];

  public:
    PromotionCode();
    void createCode(int pCodeID,Seller*sell);
    int getPromoCode();
    ~PromotionCode();
};