#include <iostream>
using namespace std;

// Abstract-Interface-Contract 
class clsCreature {
    // There Called (Pure Virtual) Functions
    virtual void BreathIn() = 0;
    virtual void BreathOut() = 0;
};

class clsPerson : public clsCreature {
    void BreathIn() {};
    void BreathOut() {};
};

int main()
{
    clsPerson abdullah;

}