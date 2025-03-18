#include <iostream>

using namespace std;

class TextBox {
public:
  string getValue() {
    return value;
  }

  void setValue(const string& value) {
    this->value = value;
  }

  TextBox () {

  }
  
  explicit TextBox (const string& value) : value{value}  {
  
  }
  
private:
  string value;
};

int main() {
  TextBox textBox("Hello World");
  // textBox.setValue("Hello World");
  cout << textBox.getValue();

}
