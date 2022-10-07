#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

int Partition(int A[], int p, int r){
  int x = A[r];
  int i = p - 1;
  for(int j = p; j < r; ++j){
    if(A[j] <= x){
      i = i + 1;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return (i+1); //pivot position
}

void Quicksort(int A[], int p, int r){
  if(p < r){
    int q = Partition(A, p, r);
    Quicksort(A, p, q-1);
    Quicksort(A, q+1, r);
  }
}

void print(int A[], int n){
  for(int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }
  cout << endl;
}

int main() {
  int arr1[10];
  for(int i = 0; i < 10; i ++){
    arr1[i] = rand()%100;
  }
  int n1 = (sizeof(arr1) / sizeof(arr1[0])) - 1;
  
  double start1 = clock();
  //print(arr1, 10);
  Quicksort(arr1, 0, n1);
  //print(arr1, 10);
  double finish1 = clock();
  cout << "Time for QuickSorting array of 10 elements: " << ((finish1 - start1)/CLOCKS_PER_SEC) * 1000 << endl;


  int arr2[100];
  for(int i = 0; i < 100; i ++){
    arr2[i] = rand()%100;
  }
  int n2 = (sizeof(arr2) / sizeof(arr2[0])) - 1;
  
  double start2 = clock();
  Quicksort(arr2, 0, n2);
  double finish2 = clock();
  cout << "Time for QuickSorting array of 100 elements: " << ((finish2 - start2)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr3[1000];
  for(int i = 0; i < 1000; i ++){
    arr3[i] = rand()%100;
  }
  int n3 = (sizeof(arr3) / sizeof(arr3[0])) - 1;

  double start3 = clock();
  Quicksort(arr3, 0, n3);
  double finish3 = clock();
  cout << "Time for QuickSorting array of 1000 elements: " << ((finish3 - start3)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr4[10000];
  for(int i = 0; i < 10000; i ++){
    arr4[i] = rand()%100;
  }
  int n4 = (sizeof(arr4) / sizeof(arr4[0])) - 1;

  double start4 = clock();
  Quicksort(arr4, 0, n4);
  double finish4 = clock();
  cout << "Time for QuickSorting array of 10000 elements: " << ((finish4 - start4)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr5[100000];
  for(int i = 0; i < 100000; i ++){
    arr5[i] = rand()%100;
  }
  int n5 = (sizeof(arr5) / sizeof(arr5[0])) - 1;

  double start5 = clock();
  Quicksort(arr5, 0, n5);
  double finish5 = clock();
  cout << "Time for QuickSorting array of 100000 elements: " << ((finish5 - start5)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr6[1000000];
  for(int i = 0; i < 1000000; i ++){
    arr6[i] = rand()%100;
  }
  int n6 = (sizeof(arr6) / sizeof(arr6[0])) - 1;

  double start6 = clock();
  Quicksort(arr6, 0, n6);
  double finish6 = clock();
  cout << "Time for QuickSorting array of 1000000 elements: " << ((finish6 - start6)/CLOCKS_PER_SEC) * 1000 << endl;
}