#include "pch.h"
#include "NotImplementedException.h"
#include "Student.h"
#include "University.h"
#include "StudentRepository.h"
#include "UniversityRepository.h"
#include "StudentService.h"

bool StudentService::AddIfValid(string emailAddress, int universityId)
{
	//SRP
	printf("Log: Start add student with email %s", emailAddress);

	if (emailAddress == "") {
		return false;
	}

	StudentRepository* studentRepository = 
		new StudentRepository();

	if (studentRepository->Exists(emailAddress)) {
		return false;
	}

	UniversityRepository* universityRepository =
		new UniversityRepository();

	University* university =
		universityRepository->GetByID(universityId);

	Student* student = new Student(emailAddress, universityId);

	//SRP, OCP
	PackageType type =
		university->GetPackageType();
	if (type == Standard)
	{
		student->SetMonthlyEbookAllowance(10);
	}
	else if (type == Premium)
	{
		student->SetMonthlyEbookAllowance(10 * 2);
	}

	studentRepository->Add(student);

	//SRP
	printf("Log: End add student with email %s", emailAddress);

	return true;//CQS
}

Student * StudentService::GetStudentsByUniversity()
{
	throw new NotImplementedException();
}

Student * StudentService::GetStudentsByCurrentlyBorrowedEbooks()
{
	throw new NotImplementedException();
}
