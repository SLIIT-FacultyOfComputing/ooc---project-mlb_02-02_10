//IT21126956
#include <iostream>
#include "Report.h"
using namespace std;


	Report::Report(int uRID){
		reportID = uRID;
	
	}

	int Report::getRID(){
		return reportID;
	}

	void Report::generateReport(){
		
	}

	void Report::displayReport(){
		//code
	}

	Report::~Report(){
		cout <<"Deleting report ID"<< reportID <<endl;
	}
