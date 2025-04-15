#include <iostream>

using namespace std;

class Car {
private:
  int uniqueId;
  double pricePerDay;
  string modelName;
  bool availabilityStatus;
public:
  Car() {
    uniqueId = 0;
    modelName = "Unknown";
    pricePerDay = 0.0;
    availabilityStatus = false;    
  }
  Car(int uniqueId, string modelName, double pricePerDay, bool availabilityStatus) {
    this->uniqueId = uniqueId;
    this->modelName = modelName; 
    this->pricePerDay = pricePerDay;
    this->availabilityStatus = availabilityStatus;
  }
  Car(const Car &obj) {
    uniqueId = obj.uniqueId;
    modelName = obj.modelName;
    pricePerDay = obj.pricePerDay;
    availabilityStatus = obj.availabilityStatus;
  }
  ~Car() {
    cout << "Car with ID " << uniqueId << " is removed from the fleet." << endl;
  }
  void rentCar() {
    if(availabilityStatus) {
      availabilityStatus = false;
      cout << "Car with ID: " << uniqueId << " successfully rented" << endl;
    } else {
      cout << "Car with ID: " << uniqueId << " is not available for rent" << endl;
    }
  }
  void returnCar() {
    if (!availabilityStatus) {
      availabilityStatus = true;
      cout << "Car with ID: " << uniqueId << " is successfully returned" << endl;
    } else {
      cout << "Car with ID: " << uniqueId << " was already available" << endl;
    }
  }
  void displayCarDetails() {
    cout << "\nShowing Car details..." << endl;
    cout << "Car ID: " << uniqueId << endl
         << "Model Name: " << modelName << endl
         << "Price Per Day : $" << pricePerDay << endl
         << "Status: " << (availabilityStatus ? "Available" : "Rented") << endl << endl;
  }
};
int main() {
  Car c1;
  Car c2(101, "BMW I8 Roadster", 125000, false);
  Car c3(c2);

  c1.displayCarDetails();
  c2.displayCarDetails();
  c3.displayCarDetails();

  c2.rentCar();
  c1.displayCarDetails();
  
  c2.rentCar();
  c2.returnCar();
  c2.displayCarDetails();
}


















// class Car {
//   private:
//     int uniqueId;
//     string modelName;
//     double pricePerDay;
//     int quantity;
    
//   public:
//     Car() {
//       uniqueId = 0;
//       modelName = "Unknown";
//       pricePerDay = 0.0;
//       quantity = 0;    
//     }
//     Car(int pid, string n, double p, int q) {
//       uniqueId = pid;
//       modelName = n; 
//       pricePerDay = p;
//       quantity = q;
//     }
//     Car(const Car &obj) {
//       uniqueId = obj.uniqueId;
//       modelName = obj.modelName;
//       pricePerDay = obj.pricePerDay;
//       quantity = obj.quantity;
//     }
  
//     ~Car() {
//       cout << "Prodcut with ID " << uniqueId << " is removed from the cart." << endl;
//     }
  
//     void updateDiagnosis(int newDiagnosis) {
//       quantity += newDiagnosis;
//     }
//     void calculateTotalPrice() {
//       pricePerDay *= quantity;
//       cout << "Total pricePerDay of product with id " << uniqueId << " is: $" << pricePerDay << endl;
//     }
//     void displayPatientDetails() {
//       cout << "\nShowing product details..." << endl;
//       cout << "Car ID: " << uniqueId << endl
//            << "Name: " << modelName << endl
//            << "Price: " << pricePerDay << endl
//            << "Quantity: " << quantity << endl;
//     }
//   };
  
//   int main() {
//     Car p1;
//     Car p2(97, "Console", 58.90, 15);
//     Car p3(p2);
  
//     p1.updateDiagnosis(4);
  
//     p1.calculateTotalPrice();
//     p2.calculateTotalPrice();
//     p3.calculateTotalPrice();
    
//     p1.displayPatientDetails();
//     p2.displayPatientDetails();
//     p3.displayPatientDetails();
//   }