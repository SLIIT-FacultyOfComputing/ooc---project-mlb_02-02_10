//IT21101274
#include<iostream>
#include<cstring>
#include"Employee.h"

using namespace std;

Employee::Employee(const char pName[], const char pNIC[],const char pEmpType[]){
  strcpy(name,pName);
  strcpy(NIC,pNIC);
  strcpy(empType,pEmpType);
}
void Employee::setDetails(const char uEmail[], int uPhoneNo,const char uAddress[], const char uDOB[]){
  strcpy(email,uEmail);
  phoneNo=uPhoneNo;
  strcpy(address,uAddress);
  strcpy(DOB,uDOB);
  
}
void Employee::DisplayEmpDetails(){
  cout << "Employee Name : " << name<<endl;
  cout << "Employee NIC : " << NIC <<endl;
  cout << "Employee Type: "<<empType<<endl;
  cout << "Employee Email : " <<email << endl;
  cout << "Employee Phone Number : " <<phoneNo <<endl;
  cout << "Employee Address : " <<address <<endl;
  cout << "Employee DOB : " <<DOB <<endl; 
}
void Employee::updateDetails(){

}
Employee::~Employee(){
  cout << "Employee name deleted" <<name <<endl;
}