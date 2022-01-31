//IT21008696
#pragma once
class User{
  protected : 
    char name[20];
    char NIC[15];
    char email[30];
    int phoneNo;
    char address[50]; 
    char DOB[10];

  public :
      User(const char uName[],const char uNIC[]);
      void setDetails(const char uEmail[],int uPhoneNo,const char uAddress[],const char uDOB[]);
      void DisplayDetails();
      void updateDetails();
      ~User();
};