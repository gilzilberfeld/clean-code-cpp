#pragma once
class University
{
public:
	int GetID();
	PackageType GetPackageType();
private:
	int ID;

	void SetID(int ID);
	void SetName(string name);
	void SetPackageType(PackageType packageType);

};
