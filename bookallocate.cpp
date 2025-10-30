#include <iostream>
#include <vector>
using namespace std;


bool ispossible(vector<int> arr, int n, int k,int mid ){

    int studcount = 1;
    int pagesum = 0;
    for(int i =0; i<n;i++){
        if(pagesum+arr[i] <= mid){
        pagesum+=arr[i];
        }
        else{
            studcount++;
            if(studcount > k || arr[i]> mid){
                return false;
            }
            pagesum = arr[i];
        }
    }

    if(k>n){
        return false;
    }

    
        return true;
    

 
}





int findPages(vector<int> arr, int n, int k) {

    int s = 0;
    int sum = 0;
    for(int i =0; i< n;i++){
        sum += arr[i];
    }
    int end = sum;
    int ans  = -1;

    while(s<= end){
        int mid = s + (end - s)/2;

        if(ispossible(arr,n,k,mid)){
            ans = mid;
            end = mid-1;

        }
        else{
            s = mid+1;
        }
    }

    
  return ans;
    
}

int main(){
  vector<int>arr ={12,34,67,90};
  int n = arr.size();
  int k =2;
  cout << "the smallest value "<< findPages(arr,n,k);

}