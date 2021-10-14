//IT21101274
#pragma once
#include "TechSupport.h"
#include "User.h"
#define SIZE4 5

class TechSupport;

class Feedback{
  private:
    int feedBackNo;
    char fDescription[200];
    TechSupport *tech[SIZE4];
    
  public:
    Feedback(int pFBN);
    void writeFeedback(const char description[],User *user);
    int getFID();
    void displayFeedback();
    ~Feedback();
};