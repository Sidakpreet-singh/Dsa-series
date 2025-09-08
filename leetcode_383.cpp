#include<bits/stdc++.h>
using namespace std;

 bool canConstruct(string ran, string magazine) {
        unordered_map<char,int> m;
        for(char x : magazine){
            m[x]++;
        }
        
        for(char val : ran){
           if(m[val] == 0){
                return false;
            }
            
                m[val]--;
           
           
        }
        return true;
    }

int main(){
  string ran = "aa";
  string mag ="aba";
  cout<<canConstruct(ran,mag);
}