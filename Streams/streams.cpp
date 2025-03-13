#include <iostream>
#include <limits>

using namespace std;

// if -> read from a file
// of -> write to a file

int getNumber(string prompt) {
  int number;
  while (true)
  {
    cout << prompt << ": " ;
    cin >> number;
  
    if (cin.fail()) {
      cout << "Enter a valid number!" << endl;
      cin.clear(); // puts cin in goood state
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clears the buffer
    }
    else
      break;
  }
  return number;
}

int main() {
  int first = getNumber("First");
  int second = getNumber("Second");
  cout << "You entered " << first << " and " << second;
}