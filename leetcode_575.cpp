#include<bits/stdc++.h>
using namespace std;

 int distributeCandies(vector<int>& arr) {
        int n = arr.size();
        int count =0;
        unordered_set <int> s;
        for(int i =0; i<  n;i++){
            if(s.find(arr[i]) == s.end()){
                if(count  < n/2){
                count++;
                }
            }
            s.insert(arr[i]);

        }
        return count;
        
    }

int main(){
  vector<int> arr = {1,3,2,3,1,2};
  cout<<distributeCandies(arr)<<endl;
}