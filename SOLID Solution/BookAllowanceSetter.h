#pragma once
class BookAllowanceSetter
{
public:
	BookAllowanceSetter(Student* student);
	void SetAllowance(PackageType type);
private:
	Student* student;
	map<PackageType, IAllowanceRule*> rules;
};

