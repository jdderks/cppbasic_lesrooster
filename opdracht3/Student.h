#pragma once
#include "Persoon.h"
class Student : public Persoon 
{
public:
	Student(int age, std::string name, float schuld);
private:
	float studieschuld;
};
