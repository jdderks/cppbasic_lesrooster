#pragma once
#include "student.h"
#include <string>
#include <vector>

class Group
{
private:

	std::string owner;
	std::string name;
	std::vector<Student> students = std::vector<Student>();
public:
	std::string getName();

	void addStudent(Student studentToAdd);

	void removeStudent(int index);

	Student getStudent(int index);
};