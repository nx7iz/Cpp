#include <iostream>
using namespace std;

class HRSystem;

class Employee {
private:
  double salary;
  string personalInfo;

public:
  Employee(double s, string info) : salary(s), personalInfo(info) {}
  friend class HRSystem;
};

class HRSystem {
public:
  void processPayroll(const Employee& e) {
    cout << "\nSalary Amount: $" << e.salary << endl;
  }

  void viewEmployeeRecord(const Employee& e) {
    cout << "Personal Info: " << e.personalInfo << endl;
  }
};

int main() {
  Employee emp1(85000.0, "123-45-6789");
  HRSystem hr;

  hr.processPayroll(emp1);
  hr.viewEmployeeRecord(emp1);

}
