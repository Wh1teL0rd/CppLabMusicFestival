#include <iostream>
#include "MuscicFestival.h"
#include <vector>

MusicFestival::MusicFestival()
{
	budget_of_festival = 10000;
}

MusicFestival::MusicFestival(int value_budget, vector<Musician> value_musicians)
{
	budget_of_festival = value_budget;
	
	for(int i = 0; i < value_musicians.size(); i++)
	{
		budget_used+=value_musicians[i].price;

		if(budget_used>budget_of_festival)
		{
			budget_used -= value_musicians[i].price;
			cout << value_musicians[i].name << " SO EXPENSIVE" << endl;
		}
		else
		{
			musicians.push_back(value_musicians[i]);
		}
	}
}

void MusicFestival::AddMusician(Musician value_new_musician)
{
	if(budget_used + value_new_musician.price < budget_of_festival)
	{
		budget_used += value_new_musician.price;
		musicians.push_back(value_new_musician);
	}
	else
	{
		cout << value_new_musician.name << " SO EXPENSIVE" << endl;
	}
}

void MusicFestival::RemoveMusician()
{
	budget_used -= musicians.back().price;
	musicians.pop_back();
}