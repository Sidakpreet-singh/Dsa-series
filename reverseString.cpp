#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 void reverseString(vector<char>& s) {
        int st =0;
        int end = s.size() -1;
        while(st < end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
        
    }


  bool ispalindrome(string str){
    string copy = str;
    reverse(str.begin(),str.end());
    string rev = str;
    if(copy == rev){
      return true;
    }

  return false;

  }


int main(){
  // vector<char> str{'h', 'e', 'l', 'l', 'o'};
  // reverseString(str);

  // // Print the reversed string
  // for(char c : str) {
  //     cout << c;
  // }
  // cout << endl;
   string str = "racecar";
  //  reverse(str.begin(),str.end());
  //  cout<<"our reversed string : "<<str<<endl;
  cout<<ispalindrome(str)<<endl;

}