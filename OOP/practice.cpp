#include <iostream>
using namespace std;

int main() {
     int array[] = {5, 10, 15, 20, 25};
     cout<<array<<endl;
     cout<<*array<<endl;
      

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