#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    //a class method (Behavior)
    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
//there are threee modifiers
//private means that it is not accessible outside of the class
//public means you can access it outside of the class
//protected is the middle ground between public and private
int main() {
    Employee employee1;
    employee1.Name = "Saldina";
    employee1.Company = "Youtube";
    employee1.Age = 25;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Joris";
    employee2.Company = "JPMorgan Chase";
    employee2.Age = 19;
    employee2.IntroduceYourself();

}