#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool ispossible(vector <int> &arr,int N,int C, int mindist){
  int pos = arr[0];
  int cows = 1;
  for(int i = 1 ; i< N; i++){
    if(arr[i]-pos >= mindist){
      cows++;
      pos = arr[i];
    }
  }

  if(cows >= C){
    return true;
  }
  return false;

}

int getdist(vector <int> &arr , int N, int C){
  sort(arr.begin(),arr.end());
  int st = 1;
  int end = arr[N-1] - arr[0];
  int ans = -1;
  while(st <= end){
    int mid = st + (end - st )/2;
    if(ispossible(arr,N,C,mid)){
      ans = mid;
      st  = mid +1;

    }
    else{
      end = mid -1;

    }
  }
  return ans;
}

int main(){
  vector <int> arr = {10, 1, 2, 7, 5};
  int N = arr.size();
  int C = 3;
  cout << "the min distance between :"<<getdist(arr,N,C);
  return 0;
}