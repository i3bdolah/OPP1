#include <iostream>
using namespace std;

class clsEmployee {
public:
	int id;
	string name;
	float salary;

	clsEmployee(int id, string name, float salary) {
		this->id = id;
		this->name = name;
		this->salary = salary;
	}

	void fun1(clsEmployee emp) {
		emp.Print();
	}

	void fun2() {
		fun1(*this);
	}

	void Print() {
		cout << id << " \n" << name << " \n" << salary << endl;
		// Now the "this" pointer is used by the compiler either way.
	}
};

int main()
{
	clsEmployee emp(1, "Abdullah", 10912.20);
	emp.fun2();
}