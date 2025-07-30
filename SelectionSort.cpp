#include <iostream>
#include <vector>
using namespace std;

void selectionsort(int arr[],int n){
  for(int i =0; i<n-1;i++){
    int smallidx = i;
    for(int j = i+1; j<n;j++){
      if(arr[j]<arr[smallidx]){
        smallidx = j;
      }
    }
    swap(arr[i],arr[smallidx]);

  }
}

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  int arr[] = {4,1,5,2,3};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionsort(arr,n);
  print(arr,n);
  return 0;
}