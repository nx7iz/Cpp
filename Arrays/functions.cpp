#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size) {
  for (int i = 0; i < size; i++) {
    cout << numbers[i] << " ";
  }
}

// size_t = unsigned long long

bool isPrime(int number) {
  for (int factor = 2; factor < number; factor++)
    if (number % factor == 0)
      return false;
  return true;
}

int main() {
  for (int number = 2; number <= 20; number++) {
    if (isPrime(number))
      cout << number << " ";
  }
  
  // int numbers[] = { 10, 20, 30 };
  // printNumbers(numbers, size(numbers));
  

}