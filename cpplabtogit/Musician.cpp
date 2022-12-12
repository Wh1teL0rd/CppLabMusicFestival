#include <string>
#include <iostream>

#include "Musician.h"

Musician::Musician()
{
	name = "NoName";
	price = 3000;
	age = 18;
}

Musician::Musician(string value_name, int value_price, int value_age)
{
	name = value_name;
	price = value_price;
	age = value_age;
}

Musician::~Musician()
{
}