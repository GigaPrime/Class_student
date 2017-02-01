#include <iostream>
#include <string>
#include "student.h"

Student::Student() 
{
	name = new char;
	surname = new char;
	group = new char;
	
	strcpy(name, "newName");
	strcpy(surname, "newSurname");
	strcpy(group, "newGroup");

	progMark = 0;
	adminMark = 0;
	designMark = 0;
}

Student::Student(char *n, char *s, char *g, int pMark, int aMark, int dMark) 
{
	name = new char[strlen(n) + 1];
	surname = new char[strlen(s) + 1];
	group = new char[strlen(g) + 1];

	strcpy(name, n);
	strcpy(surname, s);
	strcpy(group, g);

	progMark = pMark;
	adminMark = aMark;
	designMark = dMark;
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
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

void Student::setSurname(char *s) 
{
	surname = new char[strlen(s) + 1];
	strcpy(surname, s);
}

void Student::setGroup(char *g) 
{
	group = new char[strlen(g) + 1];
	strcpy(group, g);
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
	std::cout << "\tStudent's data" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "name:\t\t" << name << std::endl;
	std::cout << "surname:\t" << surname << std::endl;
	std::cout << "group #:\t" << group << std::endl;
	std::cout << "programming:\t" << getProgMark() << std::endl;
	std::cout << "administation:\t" << getAdminMark() << std::endl;
	std::cout << "design:\t\t" << getDesignMark() << std::endl << std::endl;
}

void Student::input()
{
	std::cout << "\tStudent's input" << std::endl;
	std::cout << "--------------------------" << std::endl;

	char *tmpStudent = new char[10];
	
	std::cout << "name:\t\t";
	std::cin >> tmpStudent;
	setName(tmpStudent);

	std::cout << "surname:\t";
	std::cin >> tmpStudent;
	setSurname(tmpStudent);

	std::cout << "group #:\t";
	std::cin >> tmpStudent;
	setGroup(tmpStudent);
	
	int tmpMark;

	std::cout << "programming:\t";
	std::cin >> tmpMark;
	setProgMark(tmpMark);
	
	std::cout << "administration:\t";
	std::cin >> tmpMark;
	setAdminMark(tmpMark);

	std::cout << "design:\t\t";
	std::cin >> tmpMark;
	setDesignMark(tmpMark);

	std::cout << std::endl;
}

//void saveToFile(std::ofstream &stream);
//void loadFromFile(std::ifstream &stream);