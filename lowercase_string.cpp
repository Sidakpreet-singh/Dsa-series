#include<bits/stdc++.h>

using namespace std;

 string toLowerCase(string s) {
        string str ;

        for(char ch : s){
            str.push_back((tolower(ch)));
                                             //  use toupper() to make uppercase
        }


    return str;
        
    }

int main(){
  string st = "HELO SIDAK";
  cout<<"lower case :"<<toLowerCase(st);
  return 0;
}