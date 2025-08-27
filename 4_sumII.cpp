#include<bits/stdc++.h>
using namespace std;
 int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        unordered_map <int,int> m;
        int n = nums1.size();
        int count =0;

        for(int i = 0; i<n;i++){
            int sum = 0;
            for(int j =0; j< n; j++){
                sum = nums1[i] +nums2[j];
                m[sum]++;
            }
        }

            for( int c =0; c<n;c++){
                int tsum=0;
                for(int d =0; d< n; d++){
                    tsum = nums3[c] + nums4[d];
                    int target = -tsum;

                    if(m.find(target) != m.end()){
                        count += m[target];

                    
                }
            }
        }
        
         return count;
        
    }

  int main(){
    vector <int> arr1 ={2,8,2,-1,-2};
    vector <int> arr2 ={-2,-4,1,6};
    vector <int> arr3 ={2,-4,3,1,-2};
    vector <int> arr4 ={2,3,4,-1,-2};

    cout<<" numbers :" << fourSumCount(arr1,arr2,arr3,arr4)<<endl;

  }