#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int size, key;
  cout << "Enter size of an array: ";
  cin >> size;
  int arr[100];
  cout << "Enter array elements: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Enter key element: ";
  cin >> key;

  if (LinearSearch(arr, size, key) == 1) {
    cout << "Key element is present";
  } 
  else {
    cout << "Key element is absent";
  }
}
