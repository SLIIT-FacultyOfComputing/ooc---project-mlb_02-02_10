//IT21101274
#include<iostream>
#include<cstring>
#include"TechSupport.h"

using namespace std;

TechSupport::TechSupport(const char pName[], const char pNIC[],const char pEmpType[],int pTechID):Employee(pName,pNIC,pEmpType){
  techID = pTechID;
}
int TechSupport::getTechID(){
  return techID;
}
void TechSupport::viewFAQs(){

}
void TechSupport::manageFAQs(){

}
TechSupport::~TechSupport(){
  cout << "Deleting techID" <<techID <<endl;
}