#include <iostream>
using namespace std;

int func(int m,int n, int mid){
  long long ans = 1;
  for(int i = 0;i<n;i++){
    ans = ans * mid;
    if(ans > m){
      return 0;
    }
  }
    if(ans == m){
      return 1;
    }
    else if(ans < m){
      return 2;
    }
 
}

int nth(int m, int n){
  int st = 1;
  int end = m;
  while(st<=end){
    int mid = st + (end - st )/2;
    int root = func(m,n,mid);
    if(root == 1){
      return mid;
    }
    else if(root == 0){
      end = mid -1;

    }
    else {
      st = mid + 1;
    }
  }
  return -1;
}


int main(){
  int m= 81;
  int n = 4;
  cout<<"the Nth root of -> "<< m <<" is : " << nth(m,n)<<endl;
  return 0;
}