#pragma once
#include <iostream>
#include "Persoon.h";

class Docent : public Persoon
{
public:
	Docent(int age, std::string name, float income);
	~Docent();
	float getInkomen();

private:
	float inkomen;
};
