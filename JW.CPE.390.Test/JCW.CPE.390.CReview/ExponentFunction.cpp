#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
    int result = 1;
    for(int i = 0; i < powNum; i++) { //this can only handle posirive powers
        result = result * baseNum;
    }
    return result;
}

int main() {
int baseNum;
int powNum;

cout << "Enter base number: ";
cin >> baseNum;
cout << "Enter power number (positive integer): ";
cin >> powNum;
cout << power (baseNum, powNum) << endl;

return 0;
}