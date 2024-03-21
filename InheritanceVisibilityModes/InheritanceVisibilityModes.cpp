#include <iostream>
using namespace std;

class Person {
private:
	int DOB;
protected:
	int Age;
public:
	int Height;
};

class Employee : public Person {
public:
	int Experience;
	void Experience() {
		Person::Height;
	}
};

class Developer : public Employee {

public:
	int Projects;
	void Projects() {
		Employee::Height;
	}
};

int main()
{
	Person person;
	Employee employee;
	Developer developer;

}