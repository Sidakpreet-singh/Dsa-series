#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int lowerbound(vector <int> arr,int target){
  
  int  n  = arr.size();
  
  int st  = 0;
  int end = n-1;
  int smalli ;
  
  while(st <= end){
    int mid = st + (end - st)/2;
    if(arr[mid]>=target){
      
      smalli = mid;
      end = mid -1;
    }
    else {
      st = mid + 1;
    }
    
  }
  return smalli;

}

int main(){
  vector <int> arr = {2,3,4,5,6,8,8,9};
  
  int target = 5;
  cout<<"lower bound:"<<lowerbound( arr,target);
 
}