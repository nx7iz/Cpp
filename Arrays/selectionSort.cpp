#include <iostream>

using namespace std;

void selectionSort(int array[], int size) {
  for(int i = 0; i < size - 1; i++) {
    int min = i;

    for(int j = i + 1; j < size; j++) {
      if(array[min] > array[j]) min = j;
    }

    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  }
}

int main() {
  int numbers[] = {8, 7, 9, 2, 3, 1, 5, 4, 6};

  selectionSort(numbers, 9);

  for (int i = 0; i < 9; i++)
  {
    cout << numbers[i] << " ";
  }
  
}