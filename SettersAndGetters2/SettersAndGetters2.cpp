#include <iostream>
using namespace std;

class Arabian {
private:
	int _id = 102830;
	string _name;
	string _age;
	string _city;

public:
	int ID() {
		return _id;
	}

	void setName(string str) {
		_name = str;
	}
	string Name() {
		return _name;
	}

	void setAge(string str) {
		_age = str;
	}
	string Age() {
		return _age;
	}

	void setCity(string str) {
		_city = str;
	}
	string City() {
		return _city;
	}

	string PrintInfo() {
		return Name() + " is " + Age() + " years old. live in " + City() + ".";
	}

	__declspec(property(get = Name, put = setName)) string name;
	__declspec(property(get = Age, put = setAge)) string age;
	__declspec(property(get = City, put = setCity)) string city;
};

int main()
{
	Arabian Me;
	Me.setName("Abdullah");
	Me.setAge("23");
	Me.setCity("Jeddah");

	cout << Me.ID() << endl;
	cout << Me.Name() << endl;
	cout << Me.Age() << endl;
	cout << Me.City() << "\n\n";

	cout << Me.PrintInfo() << "______________\n\n";

	Me.name = "Mohammed Al-Ghamdi";
	Me.age = "31";
	Me.city = "Al-Baha, Baljurashi";

	cout << Me.ID() << endl;
	cout << Me.name << endl;
	cout << Me.age << endl;
	cout << Me.city << "\n\n";

	cout << Me.PrintInfo() << "______________\n\n";
}