#include <bits/stdc++.h>

using namespace std;
int lengthOfLastWord(string s) {
        int count =0;
        int n = s.length() -1;

        if(s.empty()){
            return 0;
        }
        while(n >= 0){
            if(s[n] == ' ' && count == 0){
                n--;
            }

            else if(s[n] != ' '){
                count++;
                n--;
            }

            else if(s[n] == ' ' && count != 0){
                return count;
            }
        }

        return count;
    }

int main(){
  string s = "hello sidak  ";
  cout<<lengthOfLastWord(s);
  
}