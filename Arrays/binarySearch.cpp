#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int target) {
  int low = 0;
  int high = size - 1;
  
  while(low <= high) {
    int mid = (high + low) / 2;

    if (target == array[mid]) return mid;

    else if(target > array[mid]) low = mid + 1;

    else high = mid - 1;
  }

  return -1;
}

// int main() {
//   int numbers[] = {2, 8, 16, 22, 39, 45};

//   cout << binarySearch(numbers, 6, 39);
// }

// #include <iostream>

// using namespace std;

// int main() {
//   int array[] = {8, 2, 4, 1, 3};

//   for (int i = 1; i < 5; i++)
//   {
//     int current = array[i];
//     int j = i - 1;
//     while(j >= 0 && array[j] > current) {
//       array[j + 1] = array[j];
//       j--;
//     }
//     array[j + 1] = current;
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     cout << array[i] << " ";
//   }
  
  
// }