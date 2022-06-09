#include "Solid_Solution.h"


int ValidateEmail(char* emailAddress)
{
	if (strcmp(emailAddress, "") != 0) {
		return -1;
	}
	return 0;
}


void AddIfValid(char* emailAddress, int universityId)
{

	Log("Log: Start add student with email  %s", emailAddress);

	int retval = ValidateEmail(emailAddress);
	if (retval != 0) 
		return retval;

	if (StudentRepositoryExists(emailAddress) == 1)
		return -1;

	University* university = UniversityRepositoryGetById(universityId);
	Student* student = CreateStudent(emailAddress, universityId);
	
	SetAllowance(student, university->packageType);
	StudentRepositoryAdd(&student);

	Log("Log: End add student with email  %s", emailAddress);

}

