#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;

    // Normal function
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class that provides implementation
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    // Animal a; // ❌ Cannot create object of abstract class
    Dog d;
    d.makeSound();  // ✅ Outputs: Dog barks!
    d.eat();        // ✅ Outputs: This animal eats food.
}
