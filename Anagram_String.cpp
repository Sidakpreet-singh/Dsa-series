#include<bits/stdc++.h>

using namespace std;

 bool sameFreq(int freq[],int freq1[]){
        for(int i =0; i< 26 ; i++){
            if(freq[i] != freq1[i]){
                return false;
            }
        }

        return true;
    }

    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){

        int freq[26] = {0};
        int freq1[26] = {0};

        for(int i =0;i<s.size();i++){
            freq[s[i] - 'a']++;
            freq1[t[i] - 'a']++;
        }

        if(sameFreq(freq,freq1)){
            return true;
        }

        }

    return false;
        
      }


int main(){
  string s ="natraj";
  string t = "tanraj";

  if(isAnagram(s,t)){
    cout<<"yes THESE ARE ANAGRAMS!";
  }
  else{
    cout<<"NO....NEVER!!!!! ";
  }
}