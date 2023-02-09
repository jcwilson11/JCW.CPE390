//Write a program that reads in an int array and its length and find the product of this array and return it.
#include <iostream>
using namespace std;

double product(const int a[], int n) {
  double result = 1;
  for (int i = 0; i < n; i++) {
  result *= a[i];
     }
  return result;
}

int main() {
  int a[] = {5, 3, 1, 9};
  double z = product(a, 4);
  cout << z << '\n';
}