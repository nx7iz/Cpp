#include <iostream>

using namespace std;
// Bubble Sort

void swap(int i, int j, int numbers[]) {
  int temp = numbers[i]; // temp = 2
  numbers[i] = numbers[j];
  numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {
  for (int pass = 0; pass < size; pass++) {
// 8 , 2 , 4 , 1 , 3
    for (int i = 1; i < size; i++) {
      if (numbers[i] < numbers[i - 1]) {
        swap(i, i - 1, numbers);
      }
    }
  }
}

int main() {
  int numbers[] = { 8, 2, 4, 1, 3 }; 
  bubbleSort(numbers, size(numbers));
  for (auto number: numbers) 
    cout << number << endl;
}

// // Linear search 
// int findValue(int array[], int size, int target) {
//   for (int i = 0; i < size; i++)
//     if (array[i] == target)
//       return i;
//   return -1;
// }

// int numbers[] = { 10, 20, 30 };
// cout << findValue(numbers, size(numbers), 40); 