#include <iostream>

using namespace std;

class Student {
public:
  string name;
  int age;
  static int count;
  static string universityName;

  Student (string name, int age) {
    this->name = name;
    this->age = age;
    count++;
  }

  static void displayUniversityDetails() {
    cout << "University name: " << universityName << endl
         << "Students: " << count << endl;
  }
  void details() {
    cout << "Student: " << count << endl
         << "Name: " << name << endl
         << "Age: " << age <<  endl;
  }
};

string Student::universityName = "Oblivion Bench III";
int Student::count = 0;

int main() {
  Student student1("Arceus", 21);
  student1.details();
  Student student2("Liqx", 30);
  Student::displayUniversityDetails(); 
  student2.details();
} 
