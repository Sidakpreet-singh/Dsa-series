#include<bits/stdc++.h>

using namespace std;
int firstUniqChar(string s) {

        int freq[26] = {0};

        for(char ch : s){
            freq[ch - 'a']++;
        }

        for(int i =0;i<s.size();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }

        return -1;
        
    }

  int main(){
    string s = "helloh";
    cout<<firstUniqChar(s);
    return 0;
  }