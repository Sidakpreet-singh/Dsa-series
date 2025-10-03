#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// --------------PAIR SUM---------------

// BRUTE APPROACH

// vector <int> res (vector <int> &arr,int target){
//   int n = arr.size();
//   vector <int> ans;
//   for(int i =0 ;i<n;i++){
//     for(int j = i+1 ; j<n ;j++){
//       if(arr[i]+arr[j] == target){
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;

//       }
//     }

//   }
//   return ans ;

// }

// int main(){
//   vector <int> arr ={2,7,11,15};
//   int target = 26;
//   vector <int> ans = res(arr,target);

//   cout<<"the indices:" << ans[0] <<"," << ans[1]<<endl;
//   return 0;
// }

// ------------ 2 POINTOR APPROACH---------------

// vector <int> res (vector <int> &arr,int target){
//   vector<int> ans;
//   int n = arr.size();
//   int i = 0;
//   int j = n-1;

//   while(i<j){
//     int ps = arr[i]+arr[j];
//     if(ps>target){
//       j--;
//     }
//     else if(ps<target){
//       i++;
//     }
//     else{
//       ans.push_back(i);
//       ans.push_back(j);
//       return ans;
//     }

//   }
//   return ans;
// }

// int main(){
//   vector <int> arr  ={2,7,11,15};
//   int target = 18 ;
//   vector< int> ans = res(arr,target);
//   cout<<"the pair sum indices :"<<ans[0]<<","<<ans[1]<<endl;
//   return 0 ;
// }

// --------------MAJORITY ELEMENT-----------
// --------------BRUTE FORCE APPROACH ------

// int res(vector <int> arr){
//   int freq =0;
//   int n = arr.size();

//   for(int i =0 ; i<n;i++){
//     freq =0 ;
//     for(int j =0 ; j<n ; j++){
//       if(arr[i]== arr[j]){
//         freq= freq + 1;
//       }

//     }
//     if(freq > n/2){
//      return arr[i];
//     }
//   }

//   return -1 ;
// }

// int main(){
//   vector<int> vec ={2,9,1,9,9,9};
//   cout<<"the majority element :"<<res(vec)<<endl;
//   return 0 ;

// }

// -------------------OPTIMIMZED APPROACH------------

// int res(vector<int> arr)
// {

//   sort(arr.begin(), arr.end());
//   int n = arr.size();
//   int freq =1;
//   for (int i = 0; i < n; i++)
//   {   if(arr[i]==arr[i+1]){
//     freq++;
//   }
//   else{
//     freq = 1;
//   }

//   if(freq > n/2){
//     return arr[i];
//   }
//   }

//   return -1;
// }

// int main()
// {
//   vector<int> vec = {2, 9, 6, 9, 9, 9,4,5,9,9};
//   cout << "the majority element :" << res(vec) << endl;
//   return 0;
// }



// ------------------MOORE'S VOTING ALGO--------------

int res(vector<int> arr)
{
  int freq = 0;
  int n = arr.size();
  int ans;
  
  for(int i =0 ; i<n;i++){
    if(freq <= 0){
       ans = arr[i];
    }
    if(arr[i]== ans){
      freq++;


    }
    else{
      freq--;
    }
  }

  return ans;
  
}

int main()
{
  vector<int> vec = {6, 6, 9, 6, 9,6,9,9,9};
  cout << "the majority element :" << res(vec) << endl;
  return 0;
}