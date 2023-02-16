#include <iostream>
using namespace std;

void zero (uint64_t a, uint64_t b);
void zerobyref (uint64_t& a, uint64_t& b);

int main () {
    uint64_t x = 99, y = 88;
    cout << x << "," << y << "y" << endl;
    zero (x,y);
    cout << x << "," << y << "y" << endl;
    zerobyref (x,y);
    cout << x << "," << y << "y" << endl;

}