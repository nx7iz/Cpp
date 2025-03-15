#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct Movie {
  string title;
  int year;
};

Movie parseString(string str) {
  stringstream stream;
  stream.str(str);
  
  Movie movie;

  getline(stream, movie.title, ',');
  stream >> movie.year;

  return movie;
}


int main() {
  // Parsing strings

  auto movie = parseString("John Wick 1, 2019");
  cout << movie.title << endl;
  cout << movie.year << endl;
  // string str = "10 20";
  // stringstream stream;
  // stream.str(str);
  
  // int first;
  // stream >> first;

  // int second;
  // stream >> second;

  // cout << first + second;
}


  // number --> string 
  // string toString(double number, int percision) {
  //   stringstream stream;
  //   stream << fixed << setprecision(percision) << number;
  //   return stream.str(); 
  // }

// cout << toString(12.45, 2) << endl;
// cout << toString(78.346, 3) << endl;
// cout << toString(9.37, 1) << endl;

