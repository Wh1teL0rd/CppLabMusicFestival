#include "Musician.h"
#include <string>
#include <iostream>

Musician::Musician()
{
	Name = "NoName";
	Price = 3000;
	Age = 18;
}

Musician::Musician(string valueName, int valuePrice, int valueAge)
{
	Name = valueName;
	Price = valuePrice;
	Age = valueAge;
}

Musician::~Musician()
{
}