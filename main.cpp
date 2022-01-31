#include <iostream>
//#include "User.h"
//#include"Customer.h"
//#include"Seller.h"
//#include "Payment.h"         These are not needed as they are included in below header files
//#include"Employee.h"
//#include"Item.h"
//#include"Order.h"
//#include"TechSupport.h"
#include "Feedback.h"
#include "PromotionCode.h"
#include "Cart.h"
#include "Review.h"
#include "Report.h"

using namespace std;
int main() {
  
  //IT21008696
  cout<<"----------------Customer---------------\n"<<endl;
  Customer*C1=new Customer("Bruce Wayne","9223456789V",888);
  C1->setDetails("brucewayne@wayne.lk",778899551,"Rosmead Place,Colombo 7","Feb 31");
  
  C1->DisplayDetails();
  cout<<"Customer ID: "<<C1->getCID();
  
  cout<<"\n----------------Seller---------------\n"<<endl;
  Seller*S1=new Seller("Ryan Reynolds","8523456888V",511);
  S1->setDetails("rreynolds@gmail.com",765511888,"Senevirathne Road,Negombo","March 31");
  S1->DisplayDetails();
  cout<<"Seller ID: "<<S1->getID();
  
  //IT21105302
  cout<<"\n----------------Item---------------\n"<<endl;
  Item *i1 = new Item("IT01","Pen Holder",225.25);
  i1->setQuantity(15);
  i1->addItem(S1);
  Item *i2 = new Item("IT02","Eraser",5.25);
  i2->setQuantity(25);
  i2->addItem(S1);
  Item *i3 = new Item("IT03","Pen",20);
  i3->setQuantity(35);
  i3->addItem(S1);

  i1->displayItemDetails();
  i2->displayItemDetails();
  i3->displayItemDetails();
  

  cout<<"\n----------------Cart---------------\n"<<endl;
  Cart *cart[1];
  cart[0] = new Cart(1);
  cart[0]->addItem(i1, i3);
  
  cart[0]->displayCart();

  cout<<"\n----------------Order---------------\n"<<endl;
  Order *O1 = new Order(001,C1);
  Order *O2 = new Order(002,C1);
  
  O1->displayBill();
  O2->displayBill();
  
  //IT21111488
  cout <<"\n--------------Payment-------------\n";
  Payment *p1 = new Payment("Visa");
  p1-> setCardDetails("776388421",371564844421685, 164);
  p1->displayCardDetails();
  cout <<"Card number: "<< p1->getCardNum() <<endl;
  cout <<"CVV: "<< p1->getCVV() <<endl;
  

  cout <<"\n----------PromotionCode----------\n"<<endl;
  PromotionCode *pc1 = new PromotionCode();
  pc1->createCode(46575,S1);
  cout <<"Promotion Code: " <<pc1->getPromoCode();

  //IT21101274
  cout<<"\n-----------Technical Support-------\n"<<endl;
  TechSupport*TS1 = new TechSupport("Floki LeBateau","9527451789V","Technical Support",151);
  TS1->setDetails("flokilb@ezbuy.lk",715864255,"Temple Road,Wattala","June 10");
  TS1->DisplayEmpDetails();
  cout<<"Employee ID: "<<TS1->getTechID()<<endl;

  //IT21126956
  cout << "\n------------Review------------------\n" <<endl;
  Review *r1 = new Review(46571);
  r1->addReview("This is a good item.", i1);
  cout << "Review ID: " <<r1->getReviewID() <<endl;
  r1-> displayReview();


  cout << "\n------------Report------------------\n" <<endl;
  Report *RE1 = new Report(9463);
  cout<< "Report ID: " <<RE1->getRID() <<endl;
  RE1->generateReport();
  RE1->displayReport();

  cout<<"\n------------------------------------------\n"<<endl;

  delete C1;
  delete S1;
  delete i1;
  delete i2;
  delete i3;
  delete cart[0];
  delete O1;
  delete O2;
  delete p1;
  delete TS1;
  delete pc1;
  delete RE1;
  
  return 0;
  
}