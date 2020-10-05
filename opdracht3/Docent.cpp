#include "Docent.h"

Docent::Docent(int age, std::string name, float income) : Persoon(age, name)
{
	inkomen = income;
}

Docent::~Docent()
{
}

float Docent::getInkomen()
{
	return inkomen;
}
