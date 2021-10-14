//IT21126956
#pragma once
class Report{
private:
	int reportID;

public:
	Report(int uRID);
	void generateReport();
	int getRID();
	void displayReport();
	~Report();
};