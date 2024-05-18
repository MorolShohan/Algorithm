#include <iostream>
using namespace std;

void bubbleSort(int a[]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (5 - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {
  int gg[5];
  int size;
  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> gg[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << gg[i] << " ";
  }

  bubbleSort(gg);

  cout << endl << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << gg[i] << " ";
  }

  return 0;
}
