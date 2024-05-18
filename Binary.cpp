#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right)
    {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[5];
  int num;
  int output;

  cout << "Please enter 5 elements in ASCENDING order" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(arr, 0, 4, num);

  if (output == -1) {
    cout << "is not present in the array" << endl;
  } else {
    cout << "is present at index : " << output << endl;
  }

  return 0;
}
