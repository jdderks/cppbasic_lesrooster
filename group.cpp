#include "pch.h"
#include "group.h"

std::string Group::getName() {
	return name;
}

void Group::addStudent(Student student) {
	students.push_back(student);
}

void Group::removeStudent(int nmbr) {
	students.erase(students.begin() + nmbr);
}

Student Group::getStudent(int nmbr)
{
	return students[nmbr];
}

