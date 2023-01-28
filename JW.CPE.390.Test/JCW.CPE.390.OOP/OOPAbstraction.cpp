#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) { //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) { //setter
        Company = company;
    }
    string getCompany() { //getter
        return Company;
    }
    void setAge(int age) { //setter
        if(age>=18) {
            Age = age;
            cout << Name << ", you are old enough to work! Welcome!" << endl;
        } else {
            cout << Name << ", you are too young to work! Be Gone!" << endl;
        }
    }
    int getAge() { //getter
        return Age;
    }
    //a class method (Behavior)
    void IntroduceYourself() {
        cout << "### Employee Start ###" << endl;
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
         cout << "### Employee End ###" << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }
};
//there are threee modifiers
//private means that it is not accessible outside of the class
//public means you can access it outside of the class
//protected is the middle ground between public and private
int main() {
    Employee employee1 = Employee("Saldina", "Youtube", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Joris", "JPMorgan Chase", 19);
    employee2.IntroduceYourself();

    Employee employee3 = Employee("John", "Apple", 17);
    employee3.IntroduceYourself();

    Employee employee4 = Employee("Julie", "NBA", 16);
    employee4.IntroduceYourself();

    employee4.setAge(15);
    employee2.setAge(23);
    //cout << employee4.getName() << " is " << employee4.getAge() << " years old" << endl;
}