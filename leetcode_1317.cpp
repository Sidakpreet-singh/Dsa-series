#include<bits/stdc++.h>
using namespace std;

bool nonzero(int n){

        while(n > 0){
        if(n%10 == 0){
            return false;
        }
        n = n / 10;

        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        // vector <int> ans;
        for(int i =1; i<n;i++){
            int a  = i;
            int b = n  - a;

            if((nonzero(a)) && nonzero(b)){
                return {a,b};
            }
        }




        return {0,0};
    }

int main(){
  int n = 1010;
  vector <int> ans = getNoZeroIntegers( n);
  for(int x: ans){
    cout<<x<<endl;
  }
}