#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        unordered_set <int> s(nums.begin(),nums.end());
        int ans = -1;
        int n = nums.size();

        for(int i = 0; i<=n;i++){
            if(s.find(i) == s.end()){
                ans = i;
            }
        }

        return ans;
        
    }

int main(){
  vector <int> arr = {0,1,3};
  cout<<missingNumber(arr);
  return 0;
}