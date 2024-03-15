#include <iostream>
using namespace std;

class clsPerson {
public:
	clsPerson() {
		cout << "Im The Constructor." << endl;
	}

	~clsPerson() {
		cout << "Im The Destructor." << endl;
	}
};

void fun1() {
	clsPerson temp;
}

void fun2() {
	clsPerson* temp = new clsPerson;
	delete temp;
}

int main()
{
	//clsPerson temp;
	fun1();
	fun2();
}
