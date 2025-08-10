#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int st = 1;
        int end = INT_MIN;

        int ans ;

        for(int i =0;i < n;i++){
            
            end = max(end,nums[i]);
        }

        while(st<=end){
            int mid = st + (end - st)/2;
            int result =0;

            for(int j=0;j<n;j++){

                result = result +(nums[j] + mid-1) /mid;


            }

            if(result <= threshold){
                ans = mid;
                end = mid -1;
            }

            else{
                st = mid +1;
            }





        }
        return ans;
        
    }

int main(){
  vector <int> arr ={1,2,5,9};
  int threshold = 6;
  cout<<"divisor :"<<smallestDivisor(arr,threshold);
  return 0;
}