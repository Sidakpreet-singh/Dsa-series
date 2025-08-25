#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set <int> s;
        for(int i =0; i<n;i++){
            if(s.find(nums[i]) != s.end()){
                return nums[i];
            }

            s.insert(nums[i]);
        }
        return 0;
    }



int main(){
  vector<int> arr ={4,3,2,1,3,5};
  cout<<findDuplicate(arr)<<endl;
}