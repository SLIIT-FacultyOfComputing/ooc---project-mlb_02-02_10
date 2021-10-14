//IT21008696
#pragma once
#include "User.h"


class Seller:public User{
  private:
    int SID;
    char userName[30];
    char passWord[15];

  public:
    Seller(const char uName[],const char uNIC[],int pSID);
    void setCredentials(const char pUserName[],const char pPassword[]);
    int getID();
    int checkCredentials();
    void displayCarDetails();
    ~Seller();
};