#pragma once
#include <iostream>

class Persoon
{
public:
	Persoon(int age, std::string name);
	virtual int getAge();
	virtual std::string getName();
private:
	int leeftijd;
	std::string naam;
};