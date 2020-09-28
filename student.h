#pragma once
#include <string>

class Student
{
private:
	std::string name;
	int stdntNumber;
	int year;
public:
	std::string getName();
	int getNumber();
	int getYear();
};