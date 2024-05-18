#include <iostream>
using namespace std;

void selectionsortalgorithm(int arr[]) {
  for (int i = 0; i < 4; i++) {
    int max = i;

    for (int j = i + 1; j < 5; j++)
        {
      if (arr[j] > arr[max]) {
        max = j;
      }
    }
    if (max != i) {
      int temp = arr[max];
      arr[max] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {

  int myarr[5];
  cout << "Enter 5 integers in Any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarr[i];
  }

  cout << "UNSORTED ARRAY: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarr[i] << "  ";
  }
  cout << endl;

  selectionsortalgorithm(myarr);

  cout << "SORTED ARRAY BY DESCENDING ORDER : " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarr[i] << "  ";
  }
  return 0;
}
