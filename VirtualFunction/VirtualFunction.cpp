#include <iostream>
using namespace std;

class Person {
public:
	//void Print() {
	virtual void Print() {
		cout << "Im a Person." << endl;
	}
};

class Employee : public Person {
public:
	void Print() {
		cout << "Im an Employee." << endl;
	}
};

class Student : public Person {
public:
	void Print() {
		cout << "Im a Student." << endl;
	}
};

int main()
{
	Person myPerson;
	Employee myEmployee;
	Student myStudent;

	// - Early/Static Binding
	myPerson.Print();
	myEmployee.Print();
	myStudent.Print();

	// - Late/Dynamic Binding
	Person* PointerEmp = &myEmployee;
	Person* PointerStu = &myStudent;

	cout << "\n____POINTER BELOW____\n\n";

	// Without (virtual) keyword will print the person version.
	PointerEmp->Print();
	PointerStu->Print();
}