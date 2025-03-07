#include <iostream>

using namespace std;

int main() {
  // Unpacking arrays

  int values[3] = { 10, 20, 30 };
  auto[x, y ,z] = values;
  
  cout << x << " ";
}