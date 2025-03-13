#include <iostream>
#include <string>

using namespace std;

enum class Action { // Strongly typed
  List = 1, // default 0
  Add, // 2
  Update // 3
};

enum class Operation {
  List = 1, // default 0
  Add, // 2
  Update // 3
};

int main() {
  cout << 
       "1: List invoices " << endl <<
       "2: Add invoices " << endl <<
       "3: Update invoices " << endl <<
       "Select: ";

  int input;
  cin >> input;

  if (input == static_cast<int>(Action::List)) 
    cout << "List invoices";

}