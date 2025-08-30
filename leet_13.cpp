#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
        unordered_map <char,int> r;
        int ans =0;
        r['I'] = 1;
        r['V'] = 5;
        r['X'] = 10;
        r['L'] = 50;
        r['C'] = 100;
        r['D'] = 500;
        r['M'] = 1000;

        for(int i =0; i< s.length()-1;i++){
            if(r[s[i]] < r[s[i+1]]){
                ans-=r[s[i]];

            }
            else{
                ans+=r[s[i]];
            }
        }

        ans+=r[s.back()];
        return ans;

        
    }

    int main(){
      string s = "XXIX";
      cout<<romanToInt(s)<<endl;
    }
  