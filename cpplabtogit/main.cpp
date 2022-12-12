#include <iostream>
#include <vector>
#include "MuscicFestival.h"
using namespace std;

int main()
{
    vector<Musician> musicians_vector = {Musician("Billie Joe Armstrong", 25000, 50),
    										Musician("James Hetfield", 30000, 59),
    										Musician("Corey Taylor", 20000, 48)};

    MusicFestival festival(60000,musicians_vector);


    for(int i = 0; i < festival.musicians.size(); i++)
    {
        cout << i << " musician is " << festival.musicians[i].name << endl;
    }

    return 0;
}