#include <iostream>
#include <iomanip>
using namespace std;

class clsEmployee {
private:
	int _id;
	string _fName;
	string _lName;
	string _title;
	int _salary;
	string _department;
	string _email;
	string _phone;

public:
	clsEmployee(int id, string fName, string lName,
		string email, string title, int salary, 
		string department, string phone) {
		_id = id;
		_fName = fName;
		_lName = lName;
		_title = title;
		_salary = salary;
		_department = department;
		_email = email;
		_phone = phone;
	}

	// Setters
	void set_fName(string input) {
		_fName = input;
	}
	void set_lName(string input) {
		_lName = input;
	}
	void set_title(string input) {
		_title = input;
	}
	void set_salary(int input) {
		_salary = input;
	}
	void set_department(string input) {
		_department = input;
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
	string get_title() {
		return _title;
	}
	int get_salary() {
		return _salary;
	}
	string get_department() {
		return _department;
	}
	string get_email() {
		return _email;
	}
	string get_phone() {
		return _phone;
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
		cout << setw(15) << "Title : " << _title << endl;
		cout << setw(15) << "Salary : " << _salary << endl;
		cout << setw(15) << "Departemnt : " << _department << endl;
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
	clsEmployee MMM(1,"MMM","Al-Shehri","ialaboudyah@gmail.com","Digital Transformation Section Head",24000,"Digital Transformation","1111111111");

	cout << MMM.get_department() << endl;
	MMM.set_department("IT Governance");
	cout << MMM.get_department() << endl;

	MMM.SendEmail("We Miss The Thursday Meeting", "Honestly, We missed it...");

	MMM.Print();
}