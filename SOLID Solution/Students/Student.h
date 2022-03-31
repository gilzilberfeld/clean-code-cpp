#pragma once

class Student
{
public:
	Student(string emailAddress, int universityID);
	string GetEmailAddress();
	int GetUniversityID();
	int GetMonthlyEbookAllowance();
	int GetCurrentlyBorrowedEbooks();
	void SetCurrentlyBorrowedEbooks(int books);
	void SetMonthlyBookAllowance(int allowance);
private:
	int universityID;
	string emailAddress;
};
