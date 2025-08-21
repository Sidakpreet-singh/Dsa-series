#include<bits/stdc++.h>
using namespace std;
string defangIPaddr(string address) {
      
        string result = "";
        for(char ch : address){
            if(ch == '.'){
                result += "[.]";
            }
            else{
                result += ch;
            }
        }
        return result;
    }

int main(){
  string str = "1.1.1.1.";
  cout<<defangIPaddr(str);
}