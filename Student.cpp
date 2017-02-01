#include <iostream>
#include <string>
#include "student.h"

Student::Student(char *n, char *s, char *g, int pMark, int aMark, int dMark) 
{
	name = new char[strlen(n) + 1];
	surname = new char[strlen(s) + 1];
	group = new char[strlen(g) + 1];

	strcpy(name, n);
	strcpy(surname, s);
	strcpy(group, g);

	progMark = 0;
	adminMark = 0;
	designMark = 0;
}

Student::Student(Student& student)
{
	name = student.name;
	surname = student.surname;
	group = student.group;
	progMark = student.progMark;
	adminMark = student.adminMark;
}

Student::~Student()
{
	delete[] name;
	delete[] surname;
	delete[] group;
}

void Student::setName(char *n) 
{
	char *name = new char[strlen(n)];
	strcpy(name, n);
}

void Student::setSurname(char *s) 
{
	*surname = *s;
}

void Student::setGroup(char *g) 
{
	*group = *g;
}

void Student::setProgMark(int pMark)
{
	progMark = pMark;
}

void Student::setAdminMark(int aMark)
{
	 adminMark = aMark;
}

void Student::setDesignMark(int dMark)
{
	 designMark = dMark;
}

char Student::getName()
{
	return *name;
}

char Student::getSurname()
{
	return *surname;
}

char Student::getGroup()
{
	return *group;
}

int Student::getProgMark()
{
	return progMark;
}

int Student::getAdminMark()
{
	return adminMark;
}

int Student::getDesignMark()
{
	return designMark;
}

void Student::print()
{
	std::cout << "Student's data" << std::endl;
	std::cout << "-------------------" << std::endl;
	//std::cout << name << std::endl;
	std::cout << getName() << std::endl;
	std::cout << getSurname() << std::endl;
	std::cout << getGroup() << std::endl;
	std::cout << getProgMark() << std::endl;
	std::cout << getAdminMark() << std::endl;
	std::cout << getDesignMark() << std::endl;
}

void Student::input()
{
	std::cout << "Input name" << std::endl;
	std::cin >> name;
}

//void saveToFile(std::ofstream &stream);
//void loadFromFile(std::ifstream &stream);