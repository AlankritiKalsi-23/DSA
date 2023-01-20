#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getMax(int arr[], int n) {
  int maximum = INT_MIN;
  for (int i = 0; i < n; i++) {
    /*
    if(arr[i]>maximum){
      maximum= arr[i];
    }
    */
    maximum = max(arr[i], maximum);
  }
  return maximum;
}

int getMin(int arr[], int n) {
  int minimum = INT_MAX;
  for (int i = 0; i < n; i++) {
    /*
    if(arr[i]<minimum){
      minimum = arr[i];
    }
    */
    minimum = min(arr[i], minimum);
  }
  return minimum;
}

int main() {
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  int arr[100];
  cout << "Enter array elements: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Maximum element = " << getMax(arr, size) << endl;
  cout << "Minimum element = " << getMin(arr, size) << endl;
}
