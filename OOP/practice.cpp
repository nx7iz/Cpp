#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    const int empID;
    string name;
    int individualAttendance;
    static int totalAttendance;  // Static counter for all check-ins

public:
    // Parameterized constructor
    Employee(int id, string n) 
        : empID(id), name(n), individualAttendance(0) {}

    // Destructor
    ~Employee() {
        cout << "Employee " << empID << " (" << name << ") record is being removed." << endl;
    }

    // Mark attendance (non-const function)
    void markAttendance() {
        individualAttendance++;
        totalAttendance++;
        cout << name << " (ID: " << empID << ") checked in." << endl;
    }

    // View record (const function)
    void viewRecord() const {
        cout << "\n----- Employee Record -----" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Individual Attendance: " << individualAttendance << endl;
        cout << "--------------------------" << endl;
    }

    // Static function to get total attendance
    static int getTotalAttendance() {
        return totalAttendance;
    }
};

// Initialize static member
int Employee::totalAttendance = 0;

int main() {
    cout << "Starting Employee Attendance System...\n";
    cout << "Initial total check-ins: " << Employee::getTotalAttendance() << "\n\n";

    // Create employees
    Employee emp1(101, "John Doe");
    Employee emp2(102, "Jane Smith");
    Employee emp3(103, "Mike Johnson");

    // Simulate work week
    cout << "\n--- Monday ---" << endl;
    emp1.markAttendance();
    emp2.markAttendance();
    emp3.markAttendance();

    cout << "\n--- Tuesday ---" << endl;
    emp1.markAttendance();
    emp3.markAttendance();

    cout << "\n--- Wednesday ---" << endl;
    emp2.markAttendance();
    emp3.markAttendance();

    // View records
    emp1.viewRecord();
    emp2.viewRecord();
    emp3.viewRecord();

    cout << "\nTotal check-ins across all employees: " 
         << Employee::getTotalAttendance() << endl;

    cout << "\nSystem shutting down..." << endl;
    return 0;
}











// #include <iostream>

// using namespace std;

// class Candidate {  
// public:
//   string name;
//   int age;
//   float height;
//   float weight;
//   int fitnessScore;
//   static int totalCandidates;
  
//   Candidate(string n, int a, float h, float w, int fs) {
//     name = n;
//     age = a;
//     height = h;
//     weight = w;
//     fitnessScore = fs;
//     totalCandidates++;
//   }

//   void displayDetails() {
//     cout << "\nShowing Candidate Details" << endl;
//     cout << "Name: " << name << endl 
//          << "Age: " << age << endl
//          << "Height: " << height << " cm" << endl
//          << "Weight: " << weight << " kg" << endl
//          << "Fitness Score: " << fitnessScore << " / 100" << endl;
//   }
        
  
//   void checkEligibility() {
//     bool eligible = true;
//     if ((age < 18 || age > 25) || height < 160 || fitnessScore < 70) eligible = false;

//     if (eligible) {
//       cout << "You are eligible." << endl;
//     }
//     else {
//       cout << "You are not eligible." << endl;
//     }
//   }

//   static void showTotalCandidates() {
//     cout << "Total candidates: " <<  totalCandidates << endl;
//   }

//   ~Candidate() {
//     totalCandidates--;
//     cout << "Candidate " << name << " has been removed" << endl; 
//   }

// };

// int Candidate::totalCandidates = 0;

// int main() {
//   Candidate* candidate1 = new Candidate("John Smith", 20, 170.9, 67.34, 89);
//   Candidate* candidate2 = new Candidate("Jane Wexler", 17, 182.0, 80.0, 65);
//   Candidate* candidate3 = new Candidate("Sarah Williams", 24, 155.0, 50.0, 72);

//   candidate1->displayDetails();
//   candidate1->checkEligibility();

//   candidate2->displayDetails();
//   candidate2->checkEligibility();

//   candidate3->displayDetails();
//   candidate3->checkEligibility();

//   candidate3->weight = 71.2;
//   candidate1->age = 19;
//   candidate1->name = "Robert Prime";

//   cout << "\nAfter modifications:" << endl;
//   candidate1->displayDetails();
//   candidate1->checkEligibility();
//   candidate3->displayDetails();
//   candidate3->checkEligibility();

//   Candidate::showTotalCandidates();

//   delete candidate1;
//   delete candidate2;
//   delete candidate3;

//   Candidate::showTotalCandidates();
  
// }