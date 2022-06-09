#pragma once

enum e_PackageType {
	Standard = 0,
	Premium = 1
};

typedef enum e_PackageType PackageType;

struct s_University {
	PackageType packageType;
};


struct s_Student {
	char emailAddress[100];
	int universityId;
};

typedef struct s_University University;
typedef struct s_Student Student;

University* UniversityRepositoryGetById(universityId);
void Log(char* text, char* emailAddress);
void SetAllowance(Student* student, PackageType type);
Student* CreateStudent(char* emailAddress, int universityId);