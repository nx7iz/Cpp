#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Movie {
  int id;
  string title;
  int year;
};

int main() {
  fstream file;
  file.open("file.txt", ios::in | ios::out | ios::app | ios::binary);
  if (file.is_open()) {
    file.close();
  }



}



// Writing to file (ostream) 
// ofstream file;
// file.open("data.csv");
// if (file.is_open()) {
  //   // CSV: Comma Separated Value
  //   file << "id,title,releaseYear\n"
  //        << "1,John Wick 1,2017\n"
  //        << "2,John Wick 2,2019\n";
  //   file.close();
  //   // file << setw(20) << "Hello" << setw(20) << "World" << endl; 
  // }






  // // Reading from file (istream)
  // ifstream file;
  // file.open("data.csv");
  // if (file.is_open()) {
  //   string str;
  //   getline(file, str);
  
  //   while (!file.eof()) { // eof -> end of file 
  //     getline(file, str, ',');
  //     if (str.empty()) continue;
  
  //     Movie movie;
  //     movie.id = stoi(str);
  
  //     getline(file, str, ',');
  //     movie.title = str;
  
  //     getline(file, str);
  //     movie.year = stoi(str);
  
  //     cout << movie.title << endl;
  //   }
  
  //   file.close();
  // }


