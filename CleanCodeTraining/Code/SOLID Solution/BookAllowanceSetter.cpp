#include "pch.h"
#include "PackageType.h"
#include "Rules\IAllowanceRule.h"
#include "Rules\PremiumAllowanceRule.h"
#include "Rules\StandardAllowanceRule.h"
#include "Students\Student.h"
#include "BookAllowanceSetter.h"

BookAllowanceSetter::BookAllowanceSetter(Student* student)
{
	this->student = student;

	rules[Premium] = new PremiumAllowanceRule();
	rules[Standard] = new StandardAllowanceRule();
}


void BookAllowanceSetter::SetAllowance(PackageType type)
{
	int factor = rules[type]->GetFactor();
	student->SetMonthlyBookAllowance(factor * 10);
}
