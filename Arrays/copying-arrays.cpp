#include <iostream>

using namespace std;

int main() {
  // Copying array
  int first[] = { 10, 20, 30 };
  int second[size(first)];

  for (int i = 0; i < 5; i++) {
    second[i] = first[i];
  }
  for (int number: second) 
    cout << number << endl;
}