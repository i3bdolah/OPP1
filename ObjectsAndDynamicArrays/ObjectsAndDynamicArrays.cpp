#include <iostream>
using namespace std;

class clsA {
public:
	// Dummy constructor
	clsA() {
		
	};

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


	clsA* arrA = new clsA[NumOfObj];

	for (int i = 0; i < NumOfObj; i++)
	{
		arrA[i] = clsA((i + 1) * 2);
	}

	for (int i = 0; i < NumOfObj; i++)
	{
		arrA[i].Print();
	}
}