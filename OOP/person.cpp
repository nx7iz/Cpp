#include <iostream>

using namespace std;

class Person {
public:
  explicit Person(int age) : age{age} {

  } 
private:
  int age;
};

void showPerson(Person person) {
  
}

int main() {
  Person person{20};
  showPerson(person);


}