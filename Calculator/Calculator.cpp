#include <iostream>
using namespace std;

class clsCalculator {

private:
	int _passedValue = 0;
	int _result = 0;
	int _lastResult = 0;
	string _lastOperation = "N/A";

	bool _isZero(int num) {
		return (num == 0);
	}

public:
	void Add(int PassedValue) {
		_passedValue = PassedValue;
		_lastResult = _result;
		_lastOperation = "Adding";
		_result += PassedValue;
	}
	void Sub(int PassedValue) {
		_passedValue = PassedValue;
		_lastResult = _result;
		_lastOperation = "Subtracting";
		_result -= PassedValue;
	}
	void Mul(int PassedValue) {
		_passedValue = PassedValue;
		_lastResult = _result;
		_lastOperation = "Multiplying";
		_result *= PassedValue;
	}
	void Div(int PassedValue) {
		_passedValue = PassedValue;

		if (_isZero(PassedValue)) PassedValue = 1;

		_lastResult = _result;
		_lastOperation = "Dividing";
		_result *= PassedValue;
	}
	void Clear() {
		_passedValue = 0;
		_result = 0;
		_lastOperation = "Clearing";
	}
	void Print() {
		cout << "Result After " << _lastOperation << " " << _passedValue << " is : ";
		cout << _result << endl;
	}
};

int main()
{
	clsCalculator Calc;


	Calc.Print();

	Calc.Add(10);
	Calc.Print();

	Calc.Add(100);
	Calc.Print();

	Calc.Sub(20);
	Calc.Print();

	Calc.Clear();
	Calc.Print();

	Calc.Div(0);
	Calc.Print();
}