#include<bits/stdc++.h>

using namespace std;



// -----------brute force

//  vector<vector<int>> threeSum(vector<int>& arr) {

//         int n = arr.size();
//         vector <vector<int>> ans;
//         set <vector <int>> s;
//         for(int i = 0; i < n; i++){
//             for(int j = i+1;j<n;j++){
//                 for(int k = j+1; k<n;k++){
//                     if(arr[i] + arr[j] +arr[k] == 0){
//                         vector <int> trip = {arr[i],arr[j],arr[k]};
//                         sort(trip.begin(),trip.end());


//                         if(s.find(trip) == s.end()){
//                             s.insert(trip);
//                             ans.push_back(trip);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }


// -----------better approach--------
// vector<vector<int>> threeSum(vector<int>& arr) {

//         int n = arr.size();
//         vector <vector<int>> ans;
//         set <vector <int>> unique;
//         for(int i = 0; i < n; i++){
//             set <int> s;

//             int target = -(arr[i]);
//             for(int j = i+1;j<n;j++){
//                 int c = target - arr[j];

//                 if(s.find(c) != s.end()){
//                     vector <int> trip ={arr[i],arr[j],c};
//                     sort(trip.begin(),trip.end());
                    

//                     if(unique.find(trip) == unique.end()){
//                         unique.insert(trip);
//                         ans.push_back(trip);

//                     }

//                 }

//                 s.insert(arr[j]);
               
//             }
//         }
//         return ans;
//     }

// ------------optimized--

vector<vector<int>> threeSum(vector<int>& arr) {

        int n = arr.size();
        vector <vector<int>> ans;
        sort(arr.begin(),arr.end());
       
        for(int i = 0; i < n; i++){

            int j = i+1;
            int k = n-1;
            if(i > 0 && arr[i] == arr[i-1]){
                continue;
            }
            while(j<k){
                int sum = arr[i] +arr[j]+arr[k];
                if(sum >  0){
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    ans.push_back({arr[i],arr[j],arr[k]});
                    k--;
                    j++;
                    
                    while( j < k && arr[j-1] == arr[j]){
                j++;
                
            }
                }
            }

          
        }
        return ans;
    }

int main(){
  vector <int> arr ={2,-1,1,0,3,-1};
  vector<vector<int>> ans = threeSum(arr);
  int n = ans[0].size();
  for(int i =0; i< n;i++){
    for(int j =0; j< n; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}