#include <iostream>
#include <iomanip>
#include "clsEmployee.h"
using namespace std;

int main()
{
	clsEmployee Abdullah(100, "Abdullah", "Al-Shehri", "imaz@ouo.com", "0583059181", "Software Engineer", 30000, "Jedco ICT");

	Abdullah.Print();
	cout << '\n';
}