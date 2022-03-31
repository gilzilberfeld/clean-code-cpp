#pragma once

class StudentService
{
public:
	void AddIfValid(
		string emailAddress,
		int universityId,
		StudentRepository* studentRepository,
		UniversityRepository* universityRepository);
	Student* GetStudentsByUniversity();
	Student* GetStudentsByCurrentlyBorrowedEbooks();
private:
	void ValidateEmail(string emailAddress);
};
