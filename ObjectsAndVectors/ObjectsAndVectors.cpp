#include <iostream>
#include <vector>
using namespace std;

class clsA {
public:
	clsA(int value) {
		x = value;
	};

	int x;


	void Print() {
		cout << "The value of x = " << x << endl;
	}
};

int main()
{
	vector <clsA> v1;
	short NumberOfObjects = 10;

	for (int i = 1; i <= NumberOfObjects; i++)
	{
		v1.push_back(clsA(i));
	}
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print();
	}
}
