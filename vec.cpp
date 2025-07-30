#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector <int> vec ={24,25,28} ;
  // cout << vec[0] << endl;
  // cout << vec[1] << endl;
  // cout << vec[2] << endl;
  vec.pop_back();
  cout<<"size after :" << vec.size() << endl;
  cout<<"capacity after :" << vec.capacity() << endl;
  vec.push_back(45);

  for(int val : vec){
    cout<<val<<endl;
  }
}

  // ---------------------------REverse vector ------------------ 
// }
//  vector<int> reverse(vector <int> &marks){


//   }



// ----------------Linear Search-------------