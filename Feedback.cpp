//IT21101274
#include "Feedback.h"
#include <cstring>
#include <iostream>

using namespace std;

Feedback::Feedback(int pFBN){
 feedBackNo=pFBN;
}
void Feedback::writeFeedback(const char description[],User *user){
  user->DisplayDetails();
  strcpy(fDescription,description);
     
}
int Feedback::getFID(){
   return feedBackNo;
}
void Feedback::displayFeedback(){

}
Feedback::~Feedback(){
  cout << "Deleted feedback number " <<feedBackNo <<endl;
}