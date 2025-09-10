#include<bits/stdc++.h>
using namespace std;

 int numJewelsInStones(string jewels, string stones) {
        unordered_set <char> s;
        int count =0;
        for(char x : jewels){
            s.insert(x);
        }

        for(int i =0 ; i< stones.length();i++){
            if(s.find(stones[i]) !=s.end()){
                count++;

            }
        }
        return count;

    }

int main(){
  string jew ="aA";
  string stones ="aaAAbs";
  cout<<numJewelsInStones(jew,stones);
}