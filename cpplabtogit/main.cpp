#include <iostream>
#include <vector>
#include "MuscicFestival.h"
using namespace std;

int main()
{
    vector<Musician> musiciansvector = {Musician("Billie Joe Armstrong", 25000, 50),
    	Musician("James Hetfield", 30000, 59),
    	Musician("Corey Taylor", 20000, 48)};

    MusicFestival festival(60000,musiciansvector);


    for(int i = 0; i < festival.musicians.size(); i++)
    {
        cout << i << " musician is " << festival.musicians[i].Name << endl;
    }

    return 0;
}