#include <iostream>

using namespace std;

// // reference
// void increasePrice(double& price) {
//   price *= 1.2;
// }

void increasePrice(double* price) {
  *price *= 1.2;
}

void swap(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}

int main() {
  // double price = 100;
  // increasePrice(&price);
  // cout << price;
  int a = 10;
  int b = 20;
  swap(&a, &b);
  cout << a << b;
}