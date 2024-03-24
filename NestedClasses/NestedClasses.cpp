#include <iostream>
#include <iomanip>
using namespace std;



class clsPerson
{
private:
	class clsAddress
	{
	private:
		string _country;
		string _province;
		string _city;
		string _streetName;

	public:
		clsAddress(string country, string province, string city, string streetName) {
			_country = country;
			_province = province;
			_city = city;
			_streetName = streetName;
		}

		string get_country() {
			return _country;
		}
		string get_province() {
			return _province;
		}
		string get_city() {
			return _city;
		}
		string get_streetName() {
			return _streetName;
		}

		void set_country(string str) {
			_country = str;
		}
		void set_province(string str) {
			_province = str;
		}
		void set_city(string str) {
			_city = str;
		}
		void set_streetName(string str) {
			_streetName = str;
		}
	};

	string _name;
	clsAddress _address;

public:
	clsPerson(string name, string country, string province, string city, string streetName) : _address(country, province, city, streetName)
	{
		_name = name;
	}

	void Print() {
		cout << setw(15) << "Name : " << _name << endl;
		cout << setw(15) << "Country : " << _address.get_country() << endl;
		cout << setw(15) << "City : " << _address.get_city() << endl;
		cout << setw(15) << "Province : " << _address.get_province() << endl;
		cout << setw(15) << "StreetName : " << _address.get_streetName() << endl;
	}
};

int main()
{
	clsPerson personTired("Abdulhamid Al-Ghamdi", "Kingdom Of Saudi Arabia", "Al-Baha", "Al-Baha", "Bakhroosh bin Ala'as");

	personTired.Print();
}