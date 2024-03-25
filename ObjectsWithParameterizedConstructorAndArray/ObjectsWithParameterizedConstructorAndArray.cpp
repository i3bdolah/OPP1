#include <iostream>
using namespace std;

class clsA {
public:
	clsA(int value) {
		x = value;
	};

	int x;


	void Print() {
		cout << "Hi : The value of x = " << x << endl;
	}
};

int main()
{
	short NumOfObj = 10;


	clsA obj[] = {clsA(10), clsA(20), clsA(30)};

	for (int i = 0; i < 3; i++)
	{
		obj[i].Print();
	}
}