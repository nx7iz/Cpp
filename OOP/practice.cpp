#include <iostream>

using namespace std;

class Car {
public:

  Car (string brand) {
    this->brand = brand;
  }

  string getbrand() {
    return brand;
  }
  
  void display() {
    cout << "Brand: " << brand << endl;
  }

private:
  string brand;
};

int main() {
  Car car("BMW");
  cout << car.getbrand();
  // car.display();
}