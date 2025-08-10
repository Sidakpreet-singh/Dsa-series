#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();
        int start = INT_MIN;
        int end = 0;
        int ans;


        for(int i =0;i<n;i++){

            end += weights[i];
            start = max(start,weights[i]);

            
        }


        while(start<=end){
            int mid = start + (end - start)/2;

            int load = 0;
            int day =1;

            for(int j =0;j<n;j++){
                if(load+weights[j]>mid){
                    day++;
                    load = weights[j];

                }
                else{
                    load+=weights[j];
                }
            }


            if(day<=days){
                end = mid-1;
                ans =mid;
            }
            
            else{
                start = mid+1;

            }
        }
        return ans;
        
    }

int main(){
  vector <int> weight ={1,2,3,4,5,6,7,8,9,10};
  int days = 5;
  cout<<"the least weight capacity of ship:"<<shipWithinDays(weight,days);
  return 0;
  
}