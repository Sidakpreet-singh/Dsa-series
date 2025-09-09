#include<bits/stdc++.h>
using namespace std;

 char findTheDifference(string s, string t) {
        unordered_map <char,int> m;
        char ans;
        for(char x:s){
            m[x]++;
        }

        for(char val : t){
            if(m[val] > 0){
                m[val]--;
            }
            else if(m[val] == 0){
                ans = val;

            }
        }

        return ans;
        
    }

int main(){
  string s ="abcd";
  string t = "abcde";

  char ans =findTheDifference(s,t);
  cout<<"ans :"<<ans;
}