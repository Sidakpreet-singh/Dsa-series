#include<bits/stdc++.h>
using namespace std;

 bool isHappy(int n) {
        unordered_set <int> s;
        
        while(n != 1){
            if(s.find(n) != s.end()){
                return false;
            }

            s.insert(n);
            int sum = 0;

            while( n > 0){
            int dig = n % 10;
            sum += (dig * dig);
            n = n/ 10;
            }

            n =sum;
        
        }
        return true;

        
    }

int main(){
  int n =19;
  cout<<isHappy(n)<<endl;
}