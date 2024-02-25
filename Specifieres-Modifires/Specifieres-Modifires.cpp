#include <iostream>
using namespace std;

class ArabianPrivate {
	string name = "Abdullah Al-Shehri";
	string age = "23";
	string city = "Al-Namas";

	//public:
	string PrintInfo() {
		return name + " is " + age + " years old. live in " + city + ".";
	}
};

class ArabianPublic {
public:
	string name;
	string age;
	string city;

	string PrintInfo() {
		return name + " is " + age + " years old. live in " + city + ".";
	}
};

int main()
{
	ArabianPublic ArabianPublic;
	ArabianPrivate ArabianPrivate;

	cout << ArabianPublic.PrintInfo() << endl;
	//cout << ArabianPrivate.PrintInfo() << endl;
}