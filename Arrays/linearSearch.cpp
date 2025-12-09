#include <iostream>

using namespace std;

// Linear Search (doesn't needs the array to be sorted)

/* Algorithm  

1. Start from the first element of the array
2. Compare the current element with the target value
3. if both are equal, item found, return the index and stop
4. if not equal, move to the next element and repeat step 2 and 3
5. if the whole list is checked and value not found, return -1 which indicates 'Not Found'

*/ 

/* PseudoCode
LinearSearch(arr, n, target):
  for i <- 0 to n-1:
    if arr[i] == target:
      return i

  return -1
*/

int linearSearch(int array[], int size, int target)
{
  for (int i = 0; i < size; i++)
    if (array[i] == target)
      return i;

  return -1;
}

int main()
{
  int numbers[] = {10, 4, 32, 16, 8};

  int target;

  cout << "Enter the value to be found: ";
  cin >> target;
  int result = linearSearch(numbers, 5, target);

  if (result >= 0)
    cout << "The number " << target << " was found at index " << result;
  else
    cout << "The number " << target << " was not found";
}