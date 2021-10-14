//IT21008696
#include "User.h"
#include <iostream>
#include <cstring>

using namespace std;

User::User(const char uName[],const char uNIC[]){
  strcpy(name, uName);
  strcpy(NIC, uNIC);
}
void User::setDetails(const char uEmail[],int uPhoneNo,const char uAddress[],const char uDOB[]){
  strcpy(email,uEmail);
  phoneNo = uPhoneNo;
  strcpy(address,uAddress);
  strcpy(DOB,uDOB); 
}
void User::DisplayDetails(){
  cout << "Name : " << name<<endl;
  cout << "NIC : " << NIC <<endl;
  cout << "Email : " <<email << endl;
  cout << "Phone Number : " <<phoneNo <<endl;
  cout << "Address : " <<address <<endl;
  cout << "DOB : " <<DOB <<endl; 
}
void User::updateDetails(){

}
User::~User(){
  cout << "Deleting user name " <<name <<endl;
}