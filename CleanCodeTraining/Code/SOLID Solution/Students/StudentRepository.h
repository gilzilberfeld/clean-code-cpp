#pragma 
class StudentRepository
{
public:
	void Add(Student* student);
	bool Exists(string emailAddress);
	Student* CreateStudent(string emailAddress, int universityID);
};
