#include <iostream>
using namespace std;

class clsA {
public:
	int x;
	void Print() {
		cout << "The value of x = " << x << endl;
	}
};

void fun1(clsA A1) {
	A1.x = 100;
}

void fun2(clsA& A1) {
	A1.x = 200;
}


int main()
{
	clsA A1;

	A1.x = 50;
	cout << "\nA.x before calling function1: \n";
	A1.Print();

	fun1(A1);
	cout << "\nA.x After calling function1: \n";
	A1.Print();

	fun2(A1);
	cout << "\nA.x After calling function2: \n";
	A1.Print();
}
