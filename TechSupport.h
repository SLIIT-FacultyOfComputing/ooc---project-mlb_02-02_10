//IT21101274
#pragma once
#include "Employee.h"
#include "Feedback.h"
#define SIZE1 2

class Employee;
class Feedback;

class TechSupport:public Employee{
  private:
    int techID;
    Feedback*FB[SIZE1];
  public:
    TechSupport(const char pName[], const char pNIC[],const char pEmpType[],int pTechID);
    int getTechID();
    void viewFAQs();
    void manageFAQs();
    ~TechSupport();
};