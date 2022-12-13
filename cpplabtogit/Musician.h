#include <string>

using namespace std;

class Musician
{
public:
	string name;
	int price;
	int age;

	Musician();
	Musician(string value_name, int value_price, int value_age);

	~Musician();
};