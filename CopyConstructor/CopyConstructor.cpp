#include <iostream>
using namespace std;

class NationalAddress {
private:
	string _city;
	string _neighbourhood;
	string _buildingNumber;
	string _apartmentNumber;


public:

	NationalAddress(string city, string neighbourhood, string buildingNumber, string apartmentNumber) {
		_city = city;
		_neighbourhood = neighbourhood;
		_buildingNumber = buildingNumber;
		_apartmentNumber = apartmentNumber;
	}

	// Copy Constructor
	NationalAddress(NationalAddress &obj) {
		_city = obj.City();
		_neighbourhood = obj.Neighbourhood();
		_buildingNumber = obj.BuildingNumber();
		_apartmentNumber = obj.ApartmentNumber();
	}

	string City() {
		return _city;
	}
	string Neighbourhood() {
		return _neighbourhood;
	}
	string BuildingNumber() {
		return _buildingNumber;
	}
	string ApartmentNumber() {
		return _apartmentNumber;
	}

	void Print() {
		cout << "City == " << _city << endl;
		cout << "Neighbourhood == " << _neighbourhood << endl;
		cout << "Building Number == " << _buildingNumber << endl;
		cout << "Apartment Number == " << _apartmentNumber << endl;
	}
};

int main()
{
	NationalAddress abdullah("JED", "Al-Rabwah", "4931", "5 ");
	abdullah.Print();

	NationalAddress mohammed(abdullah);
	mohammed.Print();

}