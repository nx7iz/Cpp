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
    cout << "Dimensions: " << endl;
  }

  int getArea() {
    return width * height;
  }
  int getWidth() {
    return width;
  }

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
  
  Rectangle() {
    cout << "Default constructor" << endl;
  }

  Rectangle(int width, int height) {
    cout << "Constructing a rectangle" << endl;
    setWidth(width);
    setHeight(height);
  }
  Rectangle (int width, int height, string color) : Rectangle(width, height) {
    cout << "Constructing a rectangle with color" << endl;
    this->color = color;
  }

private:
  int width = 0;
  int height = 0;
  string color;

}; 

int main() {
  // Rectangle rectangle1(10, 20);
  Rectangle rectangle2(8, 7, "blue");
  // rectangle.setWidth(8); 
  // rectangle.setHeight(15);
  // cout << "Rectangle: " << rectangle1.getWidth(); 
}

// class Rectangle {
// public:

//   void draw() const {
//     cout << "Drawing a rectangle" << endl;
//     cout << "Dimensions: " << width << ", " << height << endl;
//   }
  
//   int getArea() const {
//     return width * height;
//   }

//   // Getter (accessor)
//   int getWidth() const {
//     return width;
//   }

//   // Setter (mutator --> changer(changable))
//   void setWidth(int width) {
//     if (width < 0) 
//       throw invalid_argument("width");
//     this->width = width;
//   }
  
//   int getHeight() const {
//     return height;
//   }

//   void setHeight(int height) {
//     if (height < 0)
//       throw invalid_argument("height");
//     this->height = height;
//   }

//   static int getObjectCount() {
//     return objectsCount;
//   }
//   // Rectangle(int width, int height) : width{width}, height{height} { // --> member intialization list
  
//   // Default constructor
//   Rectangle() = default;

//   // Parameterized constructor
//   Rectangle(int width, int height) {
//     objectsCount++;
//     cout << "Constructing a Rectangle" << endl;
//     setWidth(width);
//     setHeight(height);
//   }

//   Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
//     cout << "Constructing a Rectangle with color" << endl;
//     this->color = color;
//   }

//   // Copy constructor
//   Rectangle(const Rectangle& source) {
//     cout << "Rectangle copied" << endl;
//     this->width = source.width;
//     this->height = source.height;
//     this->color = source.color;
//   }

//   ~Rectangle() { // to free the memory used by object
//     cout << "Destructor called" << endl;
//   }

// private:
//   int width = 0;
//   int height = 0;
//   string color;

//   static int objectsCount;
// };

// void showRectangle (Rectangle rectangle) {

// }

// static 

// int Rectangle::objectsCount = 0;


  // main

  // const Rectangle rectangle;
  // Rectangle rectangle;

  // P.1. Pointers
  // auto* rectangle = new Rectangle(10, 20);
  // rectangle->draw();
  // delete rectangle;
  // rectangle = nullptr;

  // Rectangle first{ 10, 20 };
  // Rectangle second{ 40, 20 };
  // cout << "Rectangles: " << Rectangle::getObjectCount() << endl;

  // Rectangle first{ 10, 20, "red" };
  // Rectangle second = first;
  // showRectangle(first);

  // rectangle.setWidth(10);
  // rectangle.setHeight(20);
  // cout << rectangle.getArea();



