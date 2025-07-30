#include <iostream>
#include <vector>
using namespace std;


bool ispossible(int arr[], int n, int k,int mid ){
    int studcount = 1;
    int pages = 0;
    for(int i =0;i<n;i++){
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }
        else{
            studcount++;
            if(studcount > k || arr[i] > mid){
                return false;
            }
            pages = arr[i];
        }
        if(n < k){
            return false;
        }
    }
    return true;
}





int findPages(int arr[], int n, int k) {
    
    int s =0;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            e = mid -1;
            ans  = mid;
        }
        else{
            s = mid +1;
        }
       mid = s + (e-s)/2;
    }
    return ans;
    
    
}

int main(){
  vector<int>arr ={12,34,67,90};
  int n = arr.size();
  int k =2;
  cout << "the smallest value "<< findPages(arr.data(),n,k);

}