//IT21126956
#include <iostream>
#include "Review.h"
#include <cstring>

using namespace std;


Review::Review(int pReviewID){
		reviewID = pReviewID;
}

void Review::addReview(const char desc[],Item *item){
	item->displayItemDetails();
  strcpy(description,desc);
}

int Review::getReviewID(){
  return reviewID;
}

void Review::displayReview(){
	cout << description <<endl;
}
  
Review::~Review(){
	cout <<"Deleting review ID" << reviewID <<endl;
}
