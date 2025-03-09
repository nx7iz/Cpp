#include <iostream>

using namespace std;

// Paradigm (way of writing program)
// Attributes (properties) 
// Functions (methods)

/*
class Name (DialogBox)

attributes (variables inside a class )
           size 
           position

functions resize()
          move()
*/

class Rectangle {
public:
  int width;
  int height;
  void draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
  }
  int getArea() {
    return width * height;
  }
};

int main() {
  Rectangle rectangle;
  rectangle.width = 10;
  rectangle.height = 20;
  cout << rectangle.getArea();

}



