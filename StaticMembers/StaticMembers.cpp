#include <iostream>
using namespace std;

class clsMarriage {
private:
	string static HusbandName; // لكل الامة العربية
	string WiveName;
	bool static IsHusbandKilled; // لكل الامة العربية
	int static WivesNumber; // لكل الامة العربية
	int WiveOrder;
	string static KillerName; // لكل الامة العربية

public:
	clsMarriage(string wiveName) {
		WivesNumber++;
		WiveOrder = WivesNumber;

		WiveName = wiveName;
	}

	void KillHusband() {
		IsHusbandKilled = true;
		KillerName = WiveName;
	}

	void Print() {
		cout << "_______\n";
		cout << "Husband Name : " << HusbandName << "\n";
		cout << "Wive Name : " << WiveName << "\n";
		cout << "Is Husband Killed : " << IsHusbandKilled << "\n";
		cout << "Wives Number : " << WivesNumber << "\n";
		cout << "Wive Order : " << WiveOrder << "\n";
		cout << "Killer Name : " << KillerName << "\n";
		cout << "_______\n";
	}
};

string clsMarriage::HusbandName = "Abdullah";
bool clsMarriage::IsHusbandKilled = false;
int clsMarriage::WivesNumber = 0;
string clsMarriage::KillerName = "N/A";

int main()
{
	clsMarriage Wive1("Lama"), Wive2("Maha"), Wive3("Fatima"), Wive4("Sara");


	Wive1.Print();
	Wive2.Print();
	Wive2.KillHusband();
	Wive3.Print();
	Wive4.Print();
}