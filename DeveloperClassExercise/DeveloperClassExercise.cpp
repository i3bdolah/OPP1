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
	int get_id() {
		return _id;
	}	string get_fName() {
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

class clsEmployee : public clsPerson {
private:
	string _title;
	int _salary;
	string _department;

public:

	clsEmployee(int Id, string Fname, string Lname, string Email, string Phone,
		string Title, int Salary, string Department) // Here the sub-class variables
		: clsPerson(Id, Fname, Lname, Email, Phone) {
		_title = Title;
		_salary = Salary;
		_department = Department;
	}

	// Override Function
	void Print() {
		cout << "_____________________" << endl;
		cout << setw(15) << "ID : " << get_id() << endl;
		cout << setw(15) << "First Name : " << get_fName() << endl;
		cout << setw(15) << "Last Name : " << get_lName() << endl;
		cout << setw(15) << "Full Name : " << FullName() << endl;
		cout << setw(15) << "E-mail : " << get_email() << endl;
		cout << setw(15) << "Phone : " << get_phone() << endl;
		cout << setw(15) << "Title : " << _title << endl;
		cout << setw(15) << "Salary : " << _salary << endl;
		cout << setw(15) << "Department : " << _department << endl;
		cout << "_____________________" << endl;
	}

	// Setters
	void set_title(string input) {
		_title = input;
	}
	void set_salary(int input) {
		_salary = input;
	}
	void set_department(string input) {
		_department = input;
	}

	// Getters
	string get_title() {
		return _title;
	}
	int get_salary() {
		return _salary;
	}
	string get_department() {
		return _department;
	}
};

class clsDeveloper : public clsEmployee {
private:
	string _mainProgrammingLang;
public:
	clsDeveloper(int Id, string Fname, string Lname, string Email, string Phone,
		string Title, int Salary, string Department,
		string MainProgrammingLang) // Here the sub-class variables
		: clsEmployee(Id, Fname, Lname, Email, Phone, Title, Salary, Department)
	{
		_mainProgrammingLang = MainProgrammingLang;
	}

	void set_mainProgrammingLang(string str) {
		_mainProgrammingLang = str;
	}
	string get_mainProgrammingLang() {
		return _mainProgrammingLang;
	}

	void Print() {
		cout << "\t\t_____________________" << endl;
		cout << setw(30) << "ID : " << get_id() << endl;
		cout << setw(30) << "First Name : " << get_fName() << endl;
		cout << setw(30) << "Last Name : " << get_lName() << endl;
		cout << setw(30) << "Full Name : " << FullName() << endl;
		cout << setw(30) << "E-mail : " << get_email() << endl;
		cout << setw(30) << "Phone : " << get_phone() << endl;
		cout << setw(30) << "Title : " << get_title() << endl;
		cout << setw(30) << "Salary : " << get_salary() << endl;
		cout << setw(30) << "Department : " << get_department() << endl;
		cout << setw(30) << "Main Programming Language : " << _mainProgrammingLang << endl;
		cout << "\t\t_____________________" << endl;
	}
};

int main()
{
	clsDeveloper Mazin(100, "Mazin", "Al-Shehri", "imaz@ouo.com", "0583059181", "Software Engineer", 30000, "Jedco ICT", "C++");

	Mazin.Print();
}