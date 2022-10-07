#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

void Heapify(int A[], int heap_size, int i){
  int largest = i;
  int left = 2*i + 1;
  int right = 2*i + 2;

  if(left < heap_size && A[left] > A[largest]){
    largest = left;
  }
  else{
    largest = i;
  }

  if(right < heap_size && A[right] > A[largest]){
    largest = right;
  }
   if(largest != i){
     swap(A[i], A[largest]);
     Heapify(A, heap_size, largest);
   }
}

void BuildHeap(int A[], int len){
  for(int i = (len/2)-1; i >= 0; --i){
    Heapify(A, len, i);
  } 
}

void HeapSort(int A[], int len){
  BuildHeap(A, len);
  for(int i = len-1; i >= 0; --i){
    swap(A[0], A[i]);
    Heapify(A, i, 0);
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
  //print(arr1,10);
  HeapSort(arr1, 10);
  //print(arr1,10);

  double finish1 = clock();
  cout << "Time for HeapSorting array of 10 elements: " << ((finish1-start1)/CLOCKS_PER_SEC) * 1000 << endl;


  int arr2[100];
  for(int i = 0; i < 100; i ++){
    arr2[i] = rand()%100;
  }
  double start2 = clock();

  HeapSort(arr2, 100);

  double finish2 = clock();
  cout << "Time for HeapSorting array of 100 elements: " << ((finish2-start2)/CLOCKS_PER_SEC) * 1000 << endl;

  
  int arr3[1000];
  for(int i = 0; i < 1000; i ++){
    arr3[i] = rand()%100;
  }
  double start3 = clock();

  HeapSort(arr3, 1000);

  double finish3 = clock();
  cout << "Time for HeapSorting array of 1000 elements: " << ((finish3-start3)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr4[10000];
  for(int i = 0; i < 10000; i ++){
    arr4[i] = rand()%100;
  }
  double start4 = clock();

  HeapSort(arr4, 10000);
  
  double finish4 = clock();
  cout << "Time for HeapSorting array of 10000 elements: " << ((finish4-start4)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr5[100000];
  for(int i = 0; i < 100000; i ++){
    arr5[i] = rand()%100;
  }
  double start5 = clock();

  HeapSort(arr5, 100000);
  
  double finish5 = clock();
  cout << "Time for HeapSorting array of 100000 elements: " << ((finish5-start5)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr6[1000000];
  for(int i = 0; i < 1000000; i ++){
    arr6[i] = rand()%100;
  }
  double start6 = clock();

  HeapSort(arr6, 1000000);
  
  double finish6 = clock();
  cout << "Time for HeapSorting array of 1000000 elements: " << ((finish6-start6)/CLOCKS_PER_SEC) * 1000 << endl;
 
}

