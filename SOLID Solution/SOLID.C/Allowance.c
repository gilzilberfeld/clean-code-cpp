#include "Solid_Solution.h"

typedef int (*allowance_rule)(int);
allowance_rule Rules[2];

void SetMonthlyBookAllowance(Student* student, int allowance)
{
}

int PremiumAllowance(int initial_value)
{
	return 20;
}

int StandardAllowance(int initial_value)
{
	return 10;
}

void SetAllowance(Student* student, PackageType type)
{
	Rules[Standard] = &StandardAllowance;
	Rules[Premium] = &PremiumAllowance;

	SetMonthlyBookAllowance(student, Rules[type]);
}