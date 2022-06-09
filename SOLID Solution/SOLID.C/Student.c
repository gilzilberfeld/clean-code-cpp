#include "Solid_Solution.h"
int StudentRepositoryExists(char* emailAddress)
{
	return 0;
}

void StudentRepositoryAdd(Student* student)
{

}

Student* CreateStudent(char* emailAddress, int universityId)
{
	Student* student = (Student*)malloc(sizeof(Student));
	strcpy(student->emailAddress, emailAddress);
	student->universityId = universityId;
	return student;
}