#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    uint8_t a = 255; 
    uint32_t b = 4'200'000'000U;
    float f = 1.2345678f; //32 bits
    f = 12.345678f;
    f = 1.2345678e+38;
    f = 1.2345678e-38;

    /*
    sign = 1
    exponent = where the binary place is (where the decimal is)
    mantissa = 24 bits digits of the number (how many digits after the decimal)
        1xxxxxxxxxxxxxxxxxxxxxxx
    int8_t a = -129...127
    */



    return 0;
}
