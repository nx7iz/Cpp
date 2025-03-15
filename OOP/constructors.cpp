#include <iostream>

using namespace std;

class Book {
public:
  string title;
  string author;
  
  Book(string title, string author) {
    cout << "Parameterized constructor called" << endl;
    this->title = title;
    this->author = author;
    cout << "Title: " << title << ", Author: " << author << endl;
  }
  
  Book (Book& source) {
    cout << "Copy constructor called" << endl;
    this->title = source.title;
    this->author = source.author;
  }
  
  void displayDetails() {
  }
};

int main() {
  Book book("In Cold Blood", "Truman Capote");
  // book.displayDetails();
  Book book2 = book;
}





// // 1. Default Constructor
// class Book {
// public:

// };

// int main() {
//   Book name;
//   cout << "Done" << endl;
// }


// // 2. Parameterized constructor
// class Book {
// public:
//   string name;
//   int modelYear;

//   Book (string name, int modelYear) {
//     this->name = name;
//     this->modelYear = modelYear;
//   }

//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl;
//   }
// };

// int main() {
//   Book info("BMW", 2019);
//   // cout << "Brand: " << info.name << "\nModel: " << info.modelYear << endl;
//   info.display();
// }


// // 3. No-Argument constructor
// class Book {
// public:
//   string name;
//   int modelYear;

//   Book () {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 
//   }

// };

// int main() {
//   Book info;

// }

// // 4. Copy constructor
// class Book {
// public:
//   string name;
//   int modelYear;

//   Book (string a, int y) {
//     name = a;
//     modelYear = y;
//   }
//   // Copy constructor
//   Book (Book &obj) {
//     name = obj.name;
//     modelYear = obj.modelYear;
//   }
//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 

//   }
// };

// int main() {
//   Book info("Pagani", 2019);
//   Book info2 = info;
//   info.display();
//   info2.display();
// }