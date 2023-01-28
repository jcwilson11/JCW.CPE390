#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        //object funstions (functors) is a function that can be put inside of a class. They can be used by the class to get/find out infromatuion about itself
        bool hasHonors() {
            if(gpa >= 2.0) {
                return true;
            } else {
                return false;
            }
        }

};

int main() {
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);


    cout << student1.hasHonors() << endl; //if terminal outputs a 0, it is false. an output of 1 means it is true
    cout << student2.hasHonors() << endl;


    return 0;
}