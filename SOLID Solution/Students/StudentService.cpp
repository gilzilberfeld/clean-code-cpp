#include "..\pch.h"
#include "..\PackageType.h"
#include "..\Universities\University.h"
#include "..\Universities\UniversityRepository.h"
#include "..\Exceptions\InvalidEmail.h"
#include "..\Rules\IAllowanceRule.h"
#include "Student.h"
#include "StudentRepository.h"
#include "StudentService.h"
#include "..\Logger.h"
#include "..\BookAllowanceSetter.h"

void StudentService::AddIfValid(
	string emailAddress,
	int universityId,
	StudentRepository* studentRepository,
	UniversityRepository * universityRepository)
{
	Logger::Log("Start add student with email", emailAddress);

	ValidateEmail(emailAddress);

	if (studentRepository->Exists(emailAddress)) {
		return;
	}

	University* university = universityRepository->GetByID(universityId);
	Student* student = studentRepository->CreateStudent(emailAddress, universityId);

	PackageType type = university->GetPackageType();

	BookAllowanceSetter allowanceSetter(student);
	allowanceSetter.SetAllowance(type);

	studentRepository->Add(student);

	Logger::Log("End add student with email", emailAddress);

}

void StudentService::ValidateEmail(string emailAddress)
{
	if (emailAddress == "")
		throw new InvalidEmail("Empty");
}
