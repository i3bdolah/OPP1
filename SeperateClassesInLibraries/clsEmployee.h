#pragma once
#include <iostream>
#include "clsPerson.h";
using namespace std;


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
