#include <iostream>
using namespace std;

class Creature {
public:
	string name = "Human";
};

class Human : public Creature {
public:
	string iq = "High Level";
};

int main()
{
	// Up-casting :

	Human human;
	cout << human.iq << "\n";

	Creature* creature = &human;
	cout << creature->name << "\n";

	// _______________

	// Down-casting :

	//Creature creature;
	//cout << creature.name << "\n";

	//Human * human = &creature;

}