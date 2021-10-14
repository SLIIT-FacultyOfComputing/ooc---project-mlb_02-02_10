//IT21101274
#pragma once
class Employee{
  protected:
    char name[30];
    char NIC[15];
    char email[30];
    int phoneNo;
    char address[50];
    char DOB[10];
    char empType[20];

    public:
      Employee(const char pName[], const char pNIC[],const char pEmpType[]);
      void setDetails(const char uEmail[], int uPhoneNo,const char uAddress[],const char uDOB[]);
      void DisplayEmpDetails();
      void updateDetails();
      ~Employee();
};