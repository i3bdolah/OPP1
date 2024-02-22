#include <iostream>
using namespace std;

class Arabian {
public:
    string name;
    string age;
    string city;

    string PrintInfo() {
        return name + " is " + age + " years old. live in " + city + ".";
    }
};

int main()
{
    Arabian Abdullah;
    Abdullah.name = "Abdullah Al-Shehri";
    Abdullah.age = "23";
    Abdullah.city = "Al-Namas";

    cout << Abdullah.PrintInfo() << endl;
}