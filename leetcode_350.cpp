#include<bits/stdc++.h>
using namespace std;

 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> m1;
        vector <int> ans;
        for(int x: nums1){
            m1[x]++;
        }

        int n = nums2.size();
        for(int i =0; i<n;i++){
            if(m1[nums2[i]] > 0){
                ans.push_back(nums2[i]);
                m1[nums2[i]]--;
            }

        
        }

        return ans;

        
    }

int main(){
  vector<int> arr1={2,1,3,1};
  vector <int> arr2 ={2,1,1};
  vector <int> ans = intersect(arr1,arr2);
  for(int x: ans){
    cout<<x<<endl;
  }
}