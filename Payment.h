//IT21111488
#pragma once

class Payment{
  private:
    char cardType[30];
    char holderName[30];
    long int cardNumber;
    int CVV;

  public:
    Payment(const char pCardType[]);
    void setCardDetails(const char pHolderName[],long int pCardNumber, int pCVV);
    void displayCardDetails();
    long int getCardNum();
    int getCVV();
    ~Payment();
};