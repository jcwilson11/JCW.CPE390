#include <iostream>
using namespace std;

int main() {

    int age = 19;
    int *pAge = &age; //storing the pointer inside the variable pAge

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    //pointers are just a type of data
    cout << &age << endl; //the & symbol tells the program where the variable is stored (where it lives)
    cout << pAge << endl;
    cout << *pAge << endl; //this is how to derefernce the pointer 

    /*
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    */

    return 0;
}