#include <iostream>
#include <string>
using namespace std;

// string class with instance object (name)

int main() {
  string name = "Ruxus Arceus"; // is actually char name[] (array)
  // Raw Strings --> R"()"

  string str = R"("c:\folderA\folderB\file.txt")";
  cout << str << endl;

}

// name[0] = 'r';
// name += " Arceus";
// cout << name;
// cout << "\n" << name.length();



// string name = "Ruxus"; // is actually char name[] (array)

// copy and compare
// string another = name;
// cout << another;  
// if (name == another) 
//   cout << "\nSame";

// string another = "Arceus";
// if (name < another) 
//   cout << "Same";



// useful functions
// cout << name.empty();
// cout << name.front(); // returns the first character
// cout << name.back(); // returns the last character



// Functions(methods) for modifying strings

// name.append(" Arceus"); // adds arg to the last of name

// name.insert(0, "I am "); // inserts the msg in the given position

// name.erase(0, 2); // removes the char from start 0 to end 2

// name.clear(); // same as --> name = "";

// name.replace(0, 2, "RU"); // replaces the name from start to end with given arg 
// cout << name;



// Searching strings
// if (name.find("Arc") == -1)
//   cout << "Doesn't Exist!" << endl;

// cout << name.rfind('u');

// cout << name.find_first_of(",.;"); // returns the first occurence of any of the above chars

// cout << name.find_last_not_of(",.;") << endl;



// // Extracting substrings
// string copy = name.substr(6, 3);
// // Exercise
// auto index = name.rfind(' ');
// string firstName = name.substr(0, index);
// string lastName = name.substr(index + 1);
// cout << "(" << lastName << ")" ;


// Working with characters
// cout << islower(name[0]);
// cout << isupper(name[0]);
// cout << isspace(name[0]);
// cout << isalpha(name[0]);
// cout << isdigit(name[0]);

// cout << (char) toupper('a') << endl;
// cout << (char) tolower('A');
// char input;
// if (tolower(input) == 'x')

// Exercise  
// bool isValid(string customerNumber) {
  //   if (customerNumber.length() != 6) 
  //     return false; 

  //   for (int i = 0; i < 2; i++) 
  //     if (!isalpha(customerNumber[i]))
  //       return false;

  //   for (int i = 2; i < customerNumber.length(); i++)
  //     if (!isdigit(customerNumber[i]))
  //       return false;

  //   return true;
// }
// string customerNumber = "ZD1234";
// cout << boolalpha << isValid(customerNumber);



// // String Numeric conversion 

// // 1. String to number (sto)
// double price = stod("19.99");
// price *= 2;
// cout << price << endl;

// // 2. Number to string
// string str = to_string(19.90);
// cout << str;



// Escape sequences
  // string str = "x:\\myfodler\\";
  // string str = "\"Hello World\"";
  // char ch = '\'';
  // string str = "'Hello World'";
  // string str = "Hello\nWorld";
  // string str = "Hello\t\t\tWorld";
  // cout << str;



