#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> m;
       
        for(int i =0 ; i< nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                if(( i - m[nums[i]]) <= k ){
                    return true;
                }
            }

            m[nums[i]] = i;
        }
        

        return false;
    }

int main(){
  vector <int> arr = {1,2,3,1,2,3};
  int k = 2;

  cout<<containsNearbyDuplicate(arr,k)<<endl;
}