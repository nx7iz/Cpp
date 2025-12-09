#include <iostream>

using namespace std;

void swapNumbers(int& first, int& second) {
  int temp = first;
  first = second;
  second = temp;
}

int main() {
  int a[] = {9, 1, 8, 2, 7, 3, 6};

  for (int i = 0; i < 6; i++)
  {
    int min = i;
    for (int j = i + 1; j < 7; j++)
    {
      if(a[j] < a[min])
        min = j;
    }
    // if(min != i)
      swapNumbers(a[i], a[min]);
  }
  
  for (int i = 0; i < 7; i++)
  {
    cout << a[i] << " ";
  }
  
}