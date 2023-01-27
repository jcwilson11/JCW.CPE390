#include <iostream>
using namespace std;

float age;
double seconds; 

int main() {
    cout << "Enter your age in years: \n";
    cin >> age;
    cout << "You are " << age << " year(s) old \n";   

    seconds = age * 365 * 24 * 60 * 60;
    cout << "You are " << seconds << " second(s) old";

    return 0;
}
