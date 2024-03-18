#include <iostream>
#include <iomanip>
using namespace std;

class clsPerson {
private:
	int _id;
	string _fName;
	string _lName;
	string _fullName;
	string _email;
	string _phone;

public:
	clsPerson(int id, string fName, string lName, string email, string phone) {
		_id = id;
		_fName = fName;
		_lName = lName;
		_fullName = _fName + ' ' + _lName;
		_email = email;
		_phone = phone;
	}

	void Print() {
		cout << "_____________________" << endl;
		cout << setw(15) << "ID : " << _id << endl;
		cout << setw(15) << "First Name : " << _fName << endl;
		cout << setw(15) << "Last Name : " << _lName << endl;
		cout << setw(15) << "Full Name : " << _fullName << endl;
		cout << setw(15) << "E-mail : " << _email << endl;
		cout << setw(15) << "Phone : " << _phone << endl;
		cout << "_____________________" << endl;
	}

	void SendEmail(string subject, string body) {
		cout << "_____________________" << endl;
		cout << setw(15) << "The following message send successfully to email : " << _email << endl;
		cout << setw(15) << "Subject : " << subject << endl;
		cout << setw(15) << "Body : " << body << endl;
		cout << "_____________________" << endl;
	}

	void SendSMS(string msg) {
		cout << "_____________________" << endl;
		cout << setw(15) << "The following SMS send successfully to phone : " << _phone << endl;
		cout << setw(15) << "Message : " << msg << endl;
		cout << "_____________________" << endl;

	}
};

int main()
{
	clsPerson abdullah(1117880565, "Abdullah", "Al-Shehri", "iabdullahban@gmail.com", "+966 58 205 9181");

	abdullah.Print();
	abdullah.SendEmail("Apologize", "Sorry HR Team, I will miss you, Thank you.");
	abdullah.SendSMS("Sorry HR Team, I will miss you.");
}