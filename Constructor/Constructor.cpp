#include <iostream>
using namespace std;

class NationalAddress {
private:
	string _city;
	string _neighbourhood;
	string _buildingNumber;
	string _apartmentNumebr;


public:

	NationalAddress(string city, string neighbourhood, string buildingNumber, string apartmentNumebr) {
		_city = city;
		_neighbourhood = neighbourhood;
		_buildingNumber = buildingNumber;
		_apartmentNumebr = apartmentNumebr;
	}

	void Print() {
		cout << "City == " << _city << endl;
		cout << "Neighbourhood == " << _neighbourhood << endl;
		cout << "Building Number == " << _buildingNumber << endl;
		cout << "Apartment Numebr == " << _apartmentNumebr << endl;
	}
};

int main()
{
	NationalAddress abdullah("JED", "Al-Rabwah", "4931", "5 ");
	abdullah.Print();

}