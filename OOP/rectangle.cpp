#include <iostream>
#include "objects.h"

using namespace std;

// Paradigm (way of writing program)
// Attributes (properties) 
// Functions (methods)

/* 
UML
Object --> instance (example) of a class 
class Name (DialogBox)

attributes (variables inside a class )
           size 
           position

functions resize()
          move()
*/
// public / private --> Access Modifiers

class Rectangle {
public:

  void draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
  }
  
  int getArea() {
    return width * height;
  }
  // Getter (accessor)
  int getWidth() {
    return width;
  }
  // Setter (mutator -- > changer)
  void setWidth(int width) {
    if (width < 0) 
      throw invalid_argument("width");
    this->width = width;
  }
  
  int getHeight() {
    return height;
  }

  void setHeight(int height) {
    if (height < 0)
      throw invalid_argument("height");
    this->height = height;
  }

  // Rectangle(int width, int height) : width{width}, height{height} { // --> member intialization list
  
  // Default constructor
  Rectangle() = default;

  // Parameterized constructor
  Rectangle(int width, int height) {
    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
  }
  Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
    cout << "Constructing a Rectangle with color" << endl;
    this->color = color;
  }
  // Copy constructor
  // Rectangle(const Rectangle& source) = delete {
  //   cout << "Rectangle copied" << endl;
  //   this->width = source.width;
  //   this->height = source.height;
  //   this->color = source.color;
  // }

private:
  int width = 0;
  int height = 0;
  string color;

};

void showRectangle (Rectangle rectangle) {

}

int main() {
  Rectangle first{10, 20, "red"};
  Rectangle second = first;
  showRectangle(first);

  // rectangle.setWidth(10);
  // rectangle.setHeight(20);
  // cout << rectangle.getArea();
}



