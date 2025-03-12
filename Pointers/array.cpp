#include <iostream>
#include <memory> // unique_ptr

using namespace std;



int main() {
  // Smart pointers 
  // int* x = new int;
  // delete x;
  // delete x;

  // 1. Unique pointer (2 pointers don't point to same memory location)
  // // unique_ptr<int> x(new int);
  // auto numbers = make_unique<int[]>(10);
  // auto y = make_unique<int>();
  // numbers[0] = 10;
  // cout << numbers[0] << " ";
  // cout << *y;

  // 2. Shared pointers (2 pointers point to same memory location)
  auto x = make_shared<int>();
  *x = 10;
  shared_ptr<int> y(x);
  cout << *y << endl;
  if (x == y) 
    cout << "Same";

}
 
  // Pointers and arrays 
  // void printNumbers(int numbers[]) {
  //   numbers[0] = 40;
  // }
  
  // int numbers[] = { 10, 20, 30 };
  // int* ptr = numbers;
  // printNumbers(numbers);
  // cout << *ptr << endl;
  // cout << ptr[1] << endl;
  // cout << numbers[0];
  
  
  // Pointer arithematic
  // int numbers[] = { 10, 20, 30 };
  // int* ptr = numbers;
  // // ptr++;
  // // ptr--;
  // cout << *(ptr + 1);
  // cout << ptr[1];
  
  
  // // Comparing pointers
  // int x = 10;
  // int y = 20;
  
  // int* ptrX = &x;
  // int* ptrY = &y;
  
  // if (ptrX != nullptr) 
  //   cout << *ptrX;  
  // cout << numbers[1];
  
  
  // Exercise
  // int numbers[] = { 10, 20, 30, 40 };
  // int* ptr = &numbers[size(numbers) - 1];
  // // cout << *ptr;
  // while (ptr >= numbers) {
    //   cout << *ptr << " ";
    //   ptr--;
    // }
    

    // // Dynamic memory allocation
    // int capacity;
    // cout << "Enter capacity: ";
    // cin >> capacity;
    
    // int* numbers = new int[capacity];
    // cout << "Enter numbers: ";
    // cin >> numbers[capacity];
    // delete[] numbers;
    
    // int* number = new int;
    // delete number;
    // number = nullptr;
    // numbers = nullptr;


// // Dynamically resizing array
  // int capacity = 5;
  // int* numbers = new int[capacity];
  // int entries = 0;
  // while (true) {
  //   cout << "Number: ";
  //   cin >> numbers[entries];
  //   if (cin.fail()) break;
  //   entries++;

  //   if (entries == capacity) {
  //     capacity *= 2;
  //     int* temp = new int[capacity];
  //     for (int i = 0; i < entries; i++)
  //       temp[i] = numbers[i];
      
  //     delete[] numbers;
  //     numbers = temp;

  //   }
  // }

  // for (int i = 0; i < entries; i++) {
  //   cout << numbers[i] << endl;
  // }

  // delete[] numbers;


