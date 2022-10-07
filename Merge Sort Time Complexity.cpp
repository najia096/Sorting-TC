#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

void Merge(int A[], int p, int q, int r){
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], R[n2];
  for(int i = 0; i < n1; ++i){
    L[i] = A[p+i];
  }
  for(int j = 0; j < n2; ++j){
    R[j] = A[q+1+j];
  }
  int i(0), j(0), k(p);
  
  while(i < n1 && j < n2){
    
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
    }
    else{
      A[k] = R[j];
      j++;
    }
    k++;
  }

  while(i < n1){
    A[k] = L[i];
    i++; k++;
  }

  while(j < n2){
    A[k] = R[j];
    j++; k++;
  }
}

void MergeSort(int A[], int left, int right){
  if(left < right){
    int mid = floor((left+right)/2);

  MergeSort(A, left, mid);
  MergeSort(A, mid+1, right);
  Merge(A, left, mid, right);
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
  MergeSort(arr1, 0, n1);
  //print(arr1, 10);
  double finish1 = clock();
  cout << "Time for MergeSorting array of 10 elements: " << ((finish1 - start1)/CLOCKS_PER_SEC) * 1000 << endl;


  int arr2[100];
  for(int i = 0; i < 100; i ++){
    arr2[i] = rand()%100;
  }
  int n2 = (sizeof(arr2) / sizeof(arr2[0])) - 1;
  
  double start2 = clock();
  MergeSort(arr2, 0, n2);
  double finish2 = clock();
  cout << "Time for MergeSorting array of 100 elements: " << ((finish2 - start2)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr3[1000];
  for(int i = 0; i < 1000; i ++){
    arr3[i] = rand()%100;
  }
  int n3 = (sizeof(arr3) / sizeof(arr3[0])) - 1;

  double start3 = clock();
  MergeSort(arr3, 0, n3);
  double finish3 = clock();
  cout << "Time for MergeSorting array of 1000 elements: " << ((finish3 - start3)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr4[10000];
  for(int i = 0; i < 10000; i ++){
    arr4[i] = rand()%100;
  }
  int n4 = (sizeof(arr4) / sizeof(arr4[0])) - 1;

  double start4 = clock();
  MergeSort(arr4, 0, n4);
  double finish4 = clock();
  cout << "Time for MergeSorting array of 10000 elements: " << ((finish4 - start4)/CLOCKS_PER_SEC) * 1000 << endl;

  int arr5[100000];
  for(int i = 0; i < 100000; i ++){
    arr5[i] = rand()%100;
  }
  int n5 = (sizeof(arr5) / sizeof(arr5[0])) - 1;

  double start5 = clock();
  MergeSort(arr5, 0, n5);
  double finish5 = clock();
  cout << "Time for MergeSorting array of 100000 elements: " << ((finish5 - start5)/CLOCKS_PER_SEC) * 1000 << endl;


//Sorting this array can give errors. In that case, please run it individually in the code.
  int arr6[1000000];
  for(int i = 0; i < 1000000; i ++){
    arr6[i] = rand()%100;
  }
  int n6 = (sizeof(arr6) / sizeof(arr6[0])) - 1;
  
  double start6 = clock();
  MergeSort(arr6, 0, n6);
  double finish6 = clock();
  cout << "Time for MergeSorting array of 1000000 elements: " << ((finish6 - start6)/CLOCKS_PER_SEC) * 1000 << endl;



}
