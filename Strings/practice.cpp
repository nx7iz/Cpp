#include <iostream>
#include <string>
using namespace std;

string reverse(string str) {
  string reverseString = "";
  for (int i = str.length() - 1; i >= 0; i--) {
    reverseString += str[i];
  }
  return reverseString;
}

bool isPalindrome(int number) {
  string stringNumber = to_string(number);
  
  int newNumber = stoi(reverse(stringNumber));
  return (number == newNumber) ? true : false;
}


int main() {
  cout << boolalpha << isPalindrome(12321) << endl;
  cout << boolalpha << isPalindrome(999) << endl;
  cout << boolalpha << isPalindrome(456) << endl;
  cout << boolalpha << isPalindrome(121) << endl;
}