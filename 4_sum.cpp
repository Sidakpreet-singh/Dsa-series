#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        vector<vector<int>> ans;

        for(int i =0; i<n;i++){
                    if( i > 0 && arr[i] == arr[i-1]){
                        continue;
                    }
            for(int j = i+1;j<n;j++){

                 if( j > i+1 && arr[j] == arr[j-1]){
                        continue;
                    }
                    int h = j+1;
                    int k = n-1;
                while(h < k){
                    long long sum =(long long)arr[i]+arr[j]+arr[h]+arr[k] ;

                    //  imp to type convert to long long 

                    if(sum == target){
                        ans.push_back({arr[i],arr[j],arr[h],arr[k]});
                        h++;
                        k--;
                        while(h<k && arr[h] == arr[h-1]){
                            h++;
                        }   
                        while(h < k && arr[k] == arr[k+1]) k--;
                        
                    }

                    else if(sum > target){
                        k--;
                    }

                    else{
                        h++;
                    }



                }
            }
        }
        return ans;
        
    }


int main(){
  vector <int> arr = {1,0,-1,0,-2,2};
  int target = 0;
  vector <vector<int>> ans = fourSum(arr,target);


  for(int i =0; i< ans[0].size();i++){
    for(int j =0;j< ans[0].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;

  }
}