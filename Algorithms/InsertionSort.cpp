#include <iostream>

using namespace std;

void insertionSort(int array[], int size) {
// inser
  for(int i  = 1; i < size; i++) {
    int current = array[i];
    int j = i - 1;
    while(j >= 0 && array[j] > current) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = current;
  }
}

int main() {
  int numbers[] = {8, 2, 4, 1, 3};
  
  insertionSort(numbers, 5);
  
  for (int i = 0; i < 5; i++)
  {
    cout << numbers[i] << " " ;
  }
  
}