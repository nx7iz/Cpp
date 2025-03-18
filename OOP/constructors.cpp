#include <iostream>

using namespace std;

class Student {
public:

  Student() {
    cout << "No-arugment constructor called" << endl;
  }
};

int main() {
  Student student1;
}





// // 1. Default Constructor
// class Student {
// public:

// };

// int main() {
//   Student name;
//   cout << "Done" << endl;
// }


// // 2. Parameterized constructor
// class Student {
// public:
//   string name;
//   int modelYear;

//   Student (string name, int modelYear) {
//     this->name = name;
//     this->modelYear = modelYear;
//   }

//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl;
//   }
// };

// int main() {
//   Student info("BMW", 2019);
//   // cout << "Brand: " << info.name << "\nModel: " << info.modelYear << endl;
//   info.display();
// }


// // 3. No-Argument constructor
// class Student {
// public:
//   string name;
//   int modelYear;

//   Student () {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 
//   }

// };

// int main() {
//   Student info;

// }

// // 4. Copy constructor
// class Student {
// public:
//   string name;
//   int modelYear;

//   Student (string a, int y) {
//     name = a;
//     modelYear = y;
//   }
//   // Copy constructor
//   Student (Student &obj) {
//     name = obj.name;
//     modelYear = obj.modelYear;
//   }
//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 

//   }
// };

// int main() {
//   Student info("Pagani", 2019);
//   Student info2 = info;
//   info.display();
//   info2.display();
// }