#include <iostream>

using namespace std;
// Exercise 

struct Point {
  int x;
  int y;
};

bool operator==(const Point& first, const Point& second) {
  return (
    first.x == second.x &&
    first.y == second.y
  );
}

ostream& operator<<(ostream& stream, const Point& point) {
  return stream << "(" << point.x << ", " << point.y << ")";
}

int main() {
  Point x = { 4, 0 };
  Point y = { 4, 0 };

  cout << x << " " << y << endl; 
  if (x == y)
    cout << "Equal";
  else 
    cout << "Not equal";
}
// Customer customer;

// cout << "Enter Id: ";
// cin >> customer.id;

// cout << "Enter name: ";
// cin >> customer.name;

// cout << "Enter email: ";
// cin >> customer.email;

// cout << "Name: " << customer.name << endl
//      << "ID: " << customer.id << endl
//      << "Email: " << customer.email; 


// 02
// struct Address {
  //   string street;
  //   string city;
  //   int zipCode;
  // };
  
  // struct Customer {
  //   int id = 0;
  //   string name;
  //   string email;
  //   Address address;
  // };
  
  // ostream& operator<<(ostream& stream, const Customer& customer) {
  //   stream << customer.name;
  //   return stream;
  
  // }

  // // Initialization of customer object 
  // Customer customer = { 
  //   1,
  //   "Arceus",
  //   "abc@gmail.com",
  //   { 
  //     "123 North, Lake green",
  //     "Miami",
  //     1200
  //   }
  // };
  // cout << customer;