#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>
using namespace std;

// int
int gcd(int a, int b) { //write a function to find the greatest common divisor of a and b
    if (b == 0) return a;
    return gcd(b, a % b);
}
bool isPrime(int a) { //given a positive integer a, write a function to return true if a is prime, false otherwise
    if (a == 1) return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) return false;
    }
    return true;
}
int countPrimes(int a, int b) { //write a function to return the number of primes found between a and b inclusive.
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

// float
float sum_forward(int n) { // write a function to find the sum of 1/1, 1/2, 1/3,...,1/n(1/100) (suppose n = 100). The return value should be float type.
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}
float sum_backward(int n) { //write a function to find the sum of 1/n(1/100), 1/99, 1/98,...,1/2, 1/1 (suppose n = 100). The return value should be float type.
    float sum = 0;
    for (int i = n; i >= 1; i--) {
        sum += 1.0 / i;
    }
    return sum;
}
double hypot(double a, double b) { //Given two sides of a right-angled triangle, compute the third side
    return sqrt(a * a + b * b);
}

// array
float mean(float x[], int n) { // write a function to find the mean of an array (x) of floating numbers of size n. The return value should be float type. 
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}
void double_each(int a[], int n) { // write a function to double the value for each element of the array a. return type is void. (Need to update the value for input array)
    for (int i = 0; i < n; i++) {
        a[i] *= 2;
    }
}
int prod(int x[], int n) { //write a function to find the product of all the values contained in the array (x) of size n.  
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x[i];
    }
    return result;
}


int main() {
    //------------------------integer part

    cout << "part 1 output:" << endl;
    cout << "gcd(12, 18)=" << gcd(12, 18) << endl;   
    cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << endl;
    
    cout << "isPrime(5)=" << isPrime(5) << endl;
    cout << "isPrime(9)=" << isPrime(9) << endl;
    cout << "isPrime(1001)=" << isPrime(1001) << endl;
    cout << "isPrime(2601)=" << isPrime(2601) << endl;
    cout << "isPrime(1013)=" << isPrime(1013) << endl;
    
    cout << "countPrimes(1,100): " << countPrimes(1, 100) << endl;
    cout << "countPrimes(1,10000): " << countPrimes(1, 10000) << endl;
    
    //------------------------floating point number part

    cout << "part 2 output:" << endl;
    float ans_1 = sum_forward(100);
    float ans_2 = sum_backward(100);
    cout << setprecision(8)<< ans_1 << endl;
    cout << setprecision(8) << ans_2 << endl;
    
    cout << "hypot(3,4)=" << hypot(3, 4) << endl; // should print 5
    cout << "hypot(4,5)=" << hypot(4, 5) << endl;
    
    //------------------------array part

    cout << "part 3 output:" << endl;
    float x[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(x)/sizeof(float);
    cout << mean(x, n) << endl; // should print 35
    float y[] = {1.0, 2.0, 3.0, 4.0};
    cout << mean(y, sizeof(y)/sizeof(float)) << endl; // should print 2.5
    int z[] = {10, 20, 30, 40, 50, 60};
    int z_len = sizeof(z)/sizeof(int);
    
    double_each(z, z_len);
    for (int i = 0; i < z_len; i++) {
        cout << z[i] << ",";
    }
    cout << endl;

    int a[] = {3, 4, 1, 2, -2};
    cout << prod(a, sizeof(a)/sizeof(int)) << endl;
    int b[] = {2, 4, 8, -2, -4};
    cout << prod(b, sizeof(b)/sizeof(int)) << endl;
    

    return 0;
}