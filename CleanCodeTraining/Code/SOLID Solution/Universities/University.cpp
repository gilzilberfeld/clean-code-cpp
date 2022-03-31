#include "..\pch.h"
#include "..\Exceptions\NotImplemented.h"
#include "..\PackageType.h"
#include "University.h"


int University::GetID()
{
	return ID;
}

PackageType University::GetPackageType()
{
	throw new NotImplemented();
}

void University::SetID(int ID)
{
	throw new NotImplemented();
}
void University::SetName(string name)
{
	throw new NotImplemented();
}
void University::SetPackageType(PackageType packageType)
{
	throw new NotImplemented();
}
