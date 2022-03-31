#include "..\pch.h"
#include "..\Exceptions\NotImplemented.h"
#include "..\PackageType.h"
#include "Student.h"		
#include "StudentRepository.h"

Student* StudentRepository::CreateStudent(string emailAddress, int universityID)
{
	return new Student(emailAddress, universityID);
}

void StudentRepository::Add(Student* student) 
{
	throw new NotImplemented();
}
bool StudentRepository::Exists(string emailAddress)
{
	throw new NotImplemented();
}
