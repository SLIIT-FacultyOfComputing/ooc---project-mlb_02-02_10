//IT21126956
#pragma once
#include "Item.h"


class Review{
  private:
    int reviewID;
    char description[200];

  public:
    Review(int pReviewID);
    void addReview(const char desc[],Item *item);
    int getReviewID();
    void displayReview();
    ~Review();
};