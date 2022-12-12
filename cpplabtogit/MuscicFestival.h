#include <vector>

#include "Musician.h"

using namespace std;

class MusicFestival
{
public:
	vector<Musician> musicians;
	int budget_of_festival;
	int budget_used = 0;

	MusicFestival();
	MusicFestival(int value_budget, vector<Musician> value_musicians);

	void AddMusician(Musician value_new_musician);
	void RemoveMusician();
};