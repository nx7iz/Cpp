#include <iostream>

using namespace std;
// Bubble Sort
void bubbleSort(int numbers[], int size) {
  for (int i = 0; i < size; i++) {
// 8 , 2 , 4 , 1 , 3
    for (int j = 1; j < size; j++) {
      if (numbers[j - 1] > numbers[j]) {
        int temp = numbers[j]; // temp = 2
        numbers[j] = numbers[j - 1];
        numbers[j - 1] = temp;
      }
    }
  }
  for (int i = 0; i < size; i++) 
    cout << numbers[i] << " ";
}
int main() {
  int numbers[] = { 2, 8, 4, 1, 3 };
  bubbleSort(numbers, size(numbers));

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