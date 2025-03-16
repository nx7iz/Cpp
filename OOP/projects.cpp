#include <iostream>

using namespace std;

class Car {
public:
  string brand;
  string model;
  int modelYear;

  Car (string brand, string model, int modelYear) {
    this->brand = brand;
    this->model = model;
    this->modelYear = modelYear;
    cout << "Parametrized constructor called!!" << endl;
  }

  Car (const Car& source) {
    this->brand = source.brand;
    this->model = source.model;
    this->modelYear = source.modelYear;
    cout << "Copy constructor called!!" << endl;
  }

  void display() {
    cout << "\nBrand: " << brand << endl
         << "Model: " << model << endl
         << "Model Year: " << modelYear << endl;
  }
};

int main() {
  Car car1("Koenigsegg", "\"One: 1\"", 2014);
  Car car2 = car1;
  car1.display();
  car2.display();

}



// // 1. Student grade management
// class Student {
// public:
//   string name;
//   int age;
//   double grade;

//   Student(string name, int age, double grade) {
//     this->name = name;
//     this->age = age;
//     this->grade = grade;
//   }

//   double updateGrade(double grade) {
//     return this->grade = grade;
//   }
//   void display() {
//     cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << endl;
//   }
// };

// int main() {
  //   Student student("Arceus", 20, 90.25);
  //   student.display();
  //   student.updateGrade(91.5);
  //   student.display();
  
  // }


// 2. Bank account management
// class BankAccount {
// public:
//   string accountHolder;
//   float balance;

//   BankAccount(string accountHolder, float balance) {
//     this->accountHolder = accountHolder;
//     this->balance = balance;
//   }

//   float deposit(float balance) {
//     this->balance += balance;
//     cout << "\nDepositing..." << " $" << balance;
//     return balance;
//   }

//   float withdraw(float balance) {
//     cout << "\nWithdrawing..." << " $" << balance;
//     this->balance -= balance;
//     return balance;
//   }

//   void display() {
//     cout << "\nName: " << accountHolder << "\nBalance: $" << balance << endl;
//   }
// };

// int main() {
//   BankAccount bankAccount("Rusty Sabich", 1205.97);
//   bankAccount.display();
//   bankAccount.deposit(150.48);
//   bankAccount.display();
//   bankAccount.withdraw(500.16);
//   bankAccount.display();

// }