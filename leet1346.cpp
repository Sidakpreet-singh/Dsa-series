#include<bits/stdc++.h>
using namespace std;

  bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        int zeroCount =0;
        for (int x : arr) {
            if (s.find(2 * x) != s.end() || (x % 2 == 0 && s.find(x / 2) != s.end())) {
                return true;
            }
             if(x == 0){
                zeroCount++;
                if(zeroCount >= 2) return true; // special case for two zeros
            }
            s.insert(x);
        }
        return false;
    }

int main(){
  vector <int> arr ={0,0,2,-2};
  cout<<checkIfExist(arr);
}