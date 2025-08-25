#include<bits/stdc++.h>
using namespace std;
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s;
        unordered_set<int> s1;
      
        s.insert(nums1.begin(),nums1.end());


        for(int val : nums2){
            if(s.find(val) != s.end()){
                s1.insert(val);
            }
        }
        return vector<int>(s1.begin(),s1.end());
        
    }

int main(){
  vector <int> num1 ={2,4,5,7,9};
  vector <int> num2 = {2,4};
  vector <int> ans = intersection(num1,num2);
  cout<<ans[0]<<" "<<ans[1];
}