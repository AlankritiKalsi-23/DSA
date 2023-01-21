#include <iostream>
using namespace std;

void Reverse(int arr[], int n){
  int start = 0, end = n-1;
  while(start <= end){
    swap(arr[start], arr[end]);
    start++; 
    end--;
  }  
}

void PrintArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int main() {
  int size;
  cout << "Enter size of array: ";
  cin >> size;
  int arr[100];
  cout << "Enter array elements: ";
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }
  Reverse(arr,size);
  PrintArray(arr,size);
  
}
