#include<iostream>
#include<vector>
using namespace std;

// ------------------------optimal approach-----------

// void sortColors(vector<int>& arr) {
//        int n  = arr.size();
//        int count1=0,count2=0,count0=0;
//        for(int i =0 ;i< n;i++){
//         if(arr[i]==0){count0++;}
//         else if(arr[i]==1){count1++;}
//         else{count2++;}



//        }

//        int idx =0;

//        for(int j = 0; j< count0;j++){
//         arr[idx++]=0;
//        }
//        for(int k = 0;k<count1;k++){
//         arr[idx++]=1;
//        }

//        for(int h = 0;h<count2;h++){
//         arr[idx++]=2;
//        }
    
        
//     }



// --------------------DNF approach------------

// void sortColors(vector<int>& arr){
//   int n = arr.size();
//   int mid  =0,low =0,high = n-1;
//   while(mid<=high){
//     if(arr[mid]==0){
//       swap(arr[mid],arr[low]);
//       mid++;
//       low++;


//     }
//     else if(arr[mid]==1){
//       mid++;
//     }
//     else{
//       swap(arr[mid],arr[high]);
//       high--;
//     }
//   }

// }

// int main(){
//   vector <int> arr  ={0,1,2,2,1,0,1};
//   sortColors(arr);
//   for(int val : arr){
//     cout << val <<" ";
//   }

// }