#include <iostream>
using namespace std;

struct stAddress
{
	string country;
	string province;
	string city;
	string streetName;
};

class clsPerson
{
private:
	string _name;
	stAddress _address;
public:
	clsPerson() {
		_name = "Abdulhamid Al-Ghamdi";
		_address.country = "Kingdom Of Saudi Arabia";
		_address.city = "Al-Baha";
		_address.province = "Al-Baha";
		_address.streetName = "Bakhroosh bin Ala'as";
	}

	void Print() {
		cout << _name << endl;
		cout << _address.country << endl;
		cout << _address.city << endl;
		cout << _address.province << endl;
		cout << _address.streetName << endl;
	}
};

int main()
{
	clsPerson person1;

	person1.Print();
}