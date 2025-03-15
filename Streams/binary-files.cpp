#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Reading from binary files
  int numbers[3];
  ifstream file("numbers.bin", ios::binary);
  if (file.is_open()) {
    int number;
    while (file.read(reinterpret_cast<char*>(&number), sizeof(number))) {
      cout << number << endl;

    }
    file.close();
  }
  
}

// // Writing to binary files
// int numbers[] = { 1'000'000, 2'000'000, 3'000'000 };
// ofstream file("numbers.bin", ios::binary); // .dat
// if (file.is_open()) {
//   // (reinterpret) represents the address of number ptr as character *
//   file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
//   file.close();
// }


