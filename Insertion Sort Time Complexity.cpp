#include <iostream>
#include<time.h>
using namespace std;

void insertionSort(int A[], int n){
  int i, j, key;
  for(int j = 1; j < n; j++){
    key = A[j];
    i = j - 1;
    while(i >= 0 && A[i] > key){
      A[i+1] = A[i];
      i = i -1;
    }
    A[i+1] = key;
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
  double start1 = clock();
  insertionSort(arr1, 10);
  double finish1 = clock();
  cout << "Time for InsertionSorting array of 10 elements: " << ((finish1-start1)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr2[100];
  for(int i = 0; i < 100; i ++){
    arr2[i] = rand()%100;
  }
  double start2 = clock();
 // print(arr2, 100);
  insertionSort(arr2, 100);
  //print(arr2, 100);
  double finish2 = clock();
  cout << "Time for InsertionSorting array of 100 elements: " << ((finish2-start2)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr3[1000];
  for(int i = 0; i < 1000; i ++){
    arr2[i] = rand()%100;
  }
  double start3 = clock();
  insertionSort(arr3, 1000);
  double finish3 = clock();
  cout << "Time for InsertionSorting array of 1000 elements: " << ((finish3-start3)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr4[10000];
  for(int i = 0; i < 10000; i ++){
    arr4[i] = rand()%100;
  }
  double start4 = clock();
  insertionSort(arr4, 10000);
  double finish4 = clock();
  cout << "Time for InsertionSorting array of 10000 elements: " << ((finish4-start4)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr5[100000];
  for(int i = 0; i < 100000; i ++){
    arr5[i] = rand()%100;
  }
  double start5 = clock();
  insertionSort(arr5, 100000);
  double finish5 = clock();
  cout << "Time for InsertionSorting array of 100000 elements: " << ((finish5-start5)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr6[1000000];
  for(int i = 0; i < 1000000; i ++){
    arr6[i] = rand()%1000;
  }
  double start6 = clock();
  insertionSort(arr6, 1000000);
  double finish6 = clock();
  cout << "Time for InsertionSorting array of 1000000 elements: " << ((finish6-start6)/CLOCKS_PER_SEC) * 1000 << endl;
  
}