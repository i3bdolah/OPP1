#include <iostream>
using namespace std;

class Person {
private:
	int _age;
protected:
	bool IsMale;
public:
	string Name;
};

class Woman : public Person {
	// You cannot do this 
	//Person::_age;

	// but, You can do this 
	Person::IsMale;
	Person::Name;

};

int main()
{
	Person arwa;
	Woman nawal;
}