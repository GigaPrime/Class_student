#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <fstream>

class Student
{
private:
	char* name;
	char* surname;
	char* group;
	int progMark;
	int adminMark;
	int designMark;

public:
	Student();
	Student(char *n, char *s, char *g, int pMark, int aMark, int dMark);
	Student(Student& student);

	~Student();

	void setName(char *n);
	void setSurname(char *surname);
	void setGroup(char *group);
	void setProgMark(int progMark);
	void setAdminMark(int adminMark);
	void setDesignMark(int designMark);

	char getName();
	char getSurname();
	char getGroup();
	int getProgMark();
	int getAdminMark();
	int getDesignMark();

	void print();
	void input();

	//void saveToFile(std::ofstream &stream);
	//void loadFromFile(std::ifstream &stream);
};

#endif // !__STUDENT_H__
