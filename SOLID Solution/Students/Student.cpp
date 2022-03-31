#include "..\pch.h"
#include "..\PackageType.h"
#include "..\Exceptions\NotImplemented.h"
#include "Student.h"

Student::Student(string emailAddress, int universityID)
{
	this->universityID = universityID;
	this->emailAddress = emailAddress;
}

string Student::GetEmailAddress() 
{
	throw new NotImplemented();
}

int Student::GetUniversityID() 
{
	throw new NotImplemented();
}
int Student::GetMonthlyEbookAllowance() 
{
	throw new NotImplemented();
}
int Student::GetCurrentlyBorrowedEbooks() 
{
	throw new NotImplemented();
}
void Student::SetCurrentlyBorrowedEbooks(int books) 
{
	throw new NotImplemented();
}
void Student::SetMonthlyBookAllowance(int allowance) 
{

}

