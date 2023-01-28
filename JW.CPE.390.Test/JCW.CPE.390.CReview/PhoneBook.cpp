#include <iostream>
using namespace std;

class Contact {
    public:
        string firstName;
        string lastName;
        string relation;
        long number;
        string address;
};

int main() {
    Contact JW;
    JW.firstName = "Joris";
    JW.lastName = "Wilson";
    JW.relation = "Self";
    JW.number = 3473729134;
    JW.address = "2754 Richmond Terrac≈e Staten Island NY 10303";

    cout << JW.address;

}