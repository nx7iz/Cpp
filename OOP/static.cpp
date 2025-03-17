#include <iostream>

using namespace std;

class Student {
public:
  static int totalStudents;
  string name;
  Student(string name) {
    this->name = name;
    totalStudents++;
  }
  static void displayTotalStudents() {
    cout << "Total students: " << totalStudents << endl;
  }
};

class Calculator {
public:
  static int add(int first, int second) {
    return first + second;
  }
  static int multiply(int first, int second) {
    return first * second;
  }
};


class School {
public:
  static string schoolName;
  static void displaySchoolName() {
    cout << "School Name: " << schoolName << endl;
  }
};


class Bank{
public:
  static double interestRate;

  static double calculateInterestRate(double principal) {
    return (principal * interestRate) / 100;
  }
};


class TrafficSignal {
public:
  static string rules;

  static void displayRules() {
    cout << "Traffic rules: " << rules;
  }
};

string TrafficSignal::rules = "Red: Stop ,Green: Go ,Yellow: Slow down";

double Bank::interestRate = 5.0;

string School::schoolName = "Horizon Light School";

int Student::totalStudents = 0;

int main() {
  // Student student("Arceus");
  // Student student2("Ruxus");
  // Student::displayTotalStudents();
  // cout << "Addition: " << Calculator::add(4, 8) << endl;
  // cout << "Multiplication: " << Calculator::multiply(5, 7) << endl;
  // School::displaySchoolName();
  // cout << "Interest Rate: " << Bank::calculateInterestRate(60.78);
  TrafficSignal::displayRules();
}