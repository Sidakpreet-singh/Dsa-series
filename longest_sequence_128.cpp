#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) {
        unordered_set <int> s(arr.begin(),arr.end());
        int count ;
        int ans =0;
        int n = arr.size();
        int curr;

        if(s.empty()){ return 0;}

        

        for(int x : s){
            if(s.find(x - 1) ==s.end()){
                count = 1;
                curr = x;

                while(s.find(curr+1) != s.end()){
                    curr++;
                    count++;
                }



        ans = max(ans,count);
            }
        }

        return ans;
    }

int main(){
  vector <int> arr = {100,2,3,200,1,4};
  cout<<longestConsecutive(arr)<<endl;
  return 0;
}