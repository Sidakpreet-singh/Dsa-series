#include <iostream>
#include <climits>
#include <vector>
using namespace std;
// ------------------BRUTE FORCE APPROACH-------------

// int maxArea(vector<int>& height) {
//         int maxwater =0 ;
//         int n = height.size();
//         int ht;
//         int width;
//         int vol;

//         for(int i = 0; i< n;i++){
//             for(int j = i+1;j<n;j++){
//                 ht = min(height[i],height[j]);
//                 width = j - i;

//                 maxwater = max(maxwater,ht*width);


                
//             }
//         }
//         return maxwater;
        
//     }

//  ----------------OPTIMAL APPROACH------------

 int maxArea(vector<int>& height) {
        int n = height.size();
        int lp =0;
        int rp = n -1;
        int maxwater = 0;
        while(lp<rp){
            int ht = min(height[lp],height[rp]);
            int width = rp-lp;
            int curr = ht * width;
            maxwater = max (curr,maxwater);

            (height[lp]<height[rp]) ? lp++ : rp--;
        }

        return maxwater;
        
    }