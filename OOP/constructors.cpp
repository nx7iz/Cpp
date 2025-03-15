#include <iostream>

using namespace std;

class Animal {

};

int main() {
  Animal animal;
  cout << "Animal created." << endl;
}





// // 1. Default Constructor
// class Car {
// public:

// };

// int main() {
//   Car name;
//   cout << "Done" << endl;
// }


// // 2. Parameterized constructor
// class Car {
// public:
//   string name;
//   int modelYear;

//   Car (string name, int modelYear) {
//     this->name = name;
//     this->modelYear = modelYear;
//   }

//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl;
//   }
// };

// int main() {
//   Car info("BMW", 2019);
//   // cout << "Brand: " << info.name << "\nModel: " << info.modelYear << endl;
//   info.display();
// }


// // 3. No-Argument constructor
// class Car {
// public:
//   string name;
//   int modelYear;

//   Car () {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 
//   }

// };

// int main() {
//   Car info;

// }

// // 4. Copy constructor
// class Car {
// public:
//   string name;
//   int modelYear;

//   Car (string a, int y) {
//     name = a;
//     modelYear = y;
//   }
//   // Copy constructor
//   Car (Car &obj) {
//     name = obj.name;
//     modelYear = obj.modelYear;
//   }
//   void display() {
//     cout << "Brand: " << name << "\nModel: " << modelYear << endl; 

//   }
// };

// int main() {
//   Car info("Pagani", 2019);
//   Car info2 = info;
//   info.display();
//   info2.display();
// }