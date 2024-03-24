#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class clsPerson {
private:
	int _id;
	string _fName;
	string _lName;
	string _email;
	string _phone;

public:

	clsPerson(int id, string fName, string lName, string email, string phone) {
		_id = id;
		_fName = fName;
		_lName = lName;
		_email = email;
		_phone = phone;
	}

	string FullName() {
		return _fName + " " + _lName;
	}

	void Print() {
		cout << "_____________________" << endl;
		cout << setw(15) << "ID : " << _id << endl;
		cout << setw(15) << "First Name : " << _fName << endl;
		cout << setw(15) << "Last Name : " << _lName << endl;
		cout << setw(15) << "Full Name : " << FullName() << endl;
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

	// Setters
	void set_fName(string input) {
		_fName = input;
	}
	void set_lName(string input) {
		_lName = input;
	}
	void set_email(string input) {
		_email = input;
	}
	void set_phone(string input) {
		_phone = input;
	}

	// Getters
	string get_fName() {
		return _fName;
	}
	string get_lName() {
		return _lName;
	}
	string get_email() {
		return _email;
	}
	string get_phone() {
		return _phone;
	}
};


