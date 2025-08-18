#include <iostream>
#include<cctype>
using namespace std;


// bool alphanum(char ch){
//         if((ch >= '0' && ch <= '9') ||
//          (tolower(ch)>='a' && tolower(ch)<='z')){
//             return true;
//         }


//         return false;


//     }




    bool isPalindrome(string s) {

        int st = 0;
        int end = s.length() - 1;
        while(st < end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[st] ) != tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
        
    }

int main(){
  string str = "ma#da2@m";
  cout<<isPalindrome(str)<<endl;

}