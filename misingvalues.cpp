#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>

using namespace std;
//  vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {

//         set <int> s;
//         int n = arr.size();
//         vector <int> ans;
//         int actsum =0,expsum =0;
//         int a;
        
//         for(int i = 0; i< n; i++){
//             for(int j=0 ; j< n; j++ ){
//                 actsum += arr[i][j];

//                 if(s.find(arr[i][j]) != s.end()){
//                     a = arr[i][j];
//                     ans.push_back(a);
                   
                
//                 }

//                 s.insert(arr[i][j]);
//             }
//         }    

//         expsum = (n*n) * (n*n+1) / 2 ;
//         int b =  expsum - actsum +  a;
//         ans.push_back(b);

        
//         return ans;  
//  }

// ---------------using map----------
 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {

        unordered_map <int,int> freq;
        int n = arr.size();
        vector <int> ans;
        int a,b;
        for(int i = 0 ; i<n;i++){
            for(int j =0; j< n; j++){
                freq[arr[i][j]]++;
            }

        }

        for(int k =1;k<=n*n;k++){
            if(freq[k] == 2){
                a = k;
                
            }
            else if(freq[k] == 0){
                b = k;
                
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }

 int main(){
  vector <vector<int>> arr = {{1,2,3},{3,4,5},{6,7,8}};
  vector <int> ans = findMissingAndRepeatedValues(arr);
  cout<<"a :"<<ans[0]<<endl<<"b :"<<ans[1];
 }