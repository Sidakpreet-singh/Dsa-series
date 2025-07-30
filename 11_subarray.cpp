#include <iostream>
#include<vector>
#include<climits>
using namespace std;

// int main(){
//   // --------------MAXIMUM SUB ARRAYS------------------
//   vector <int> nums ={1,2,3,4,5};
//   int n = nums.size();
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       for(int k =i;k<=j;k++){
//         cout<<nums[k];
        
//       }
//       cout<<" ";

//     }
//     cout<<endl;

//   }

// }

// --------------------SUM OF MAX SUB ARRAYS--------------------

int main(){

  vector <int> nums ={2,3,-5,4,3,2};
  int n = nums.size();
  int maxsum = INT_MIN;
  for(int i =0 ; i< n ;i++){
    int currentsum =0;
    for(int j = i;j<n;j++){
      currentsum = currentsum + nums[j];
      maxsum = max(currentsum,maxsum);
        

    }
  }

  cout << maxsum << endl;

}

// ----------------------KADANE'S ALGORITHM---------------

// int mss(vector<int> &arr){

//   int currsum =0 ;
//   int maxsum = INT_MIN;
//   for(int val : arr){
//     currsum += val;
//     maxsum = max(currsum,maxsum);

//     if(currsum <0){
//       currsum = 0;
//     }
//   }
//   cout << "max sum ="<< maxsum<<endl;
// }

// int main(){
//   vector <int> arr ={2,3,-1,5,-3,2,4};
//   mss(arr);
//   return 0;
// }