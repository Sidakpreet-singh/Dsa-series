// #include <iostream>
// #include <vector>
// using namespace std;

// int first(vector<int>& nums, int target){
//         int st =0;
//         int n = nums.size();
//         int end = n -1;
//         int first = -1;

//         while(st <= end){
//             int mid = st + (end - st)/2;

//             if(nums[mid]==target){
//                 first = mid;
//                 end = mid -1;

//             }
//             else if(nums[mid] < target){
//                 st = mid +1;
//             }
//             else{
//                 end = mid -1;
//             }

//         }
//         return first;

//     }
        

//     int last(vector<int>& nums, int target){
//         int st =0;
//         int n = nums.size();
//         int end = n -1;
//         int last = -1;

//         while(st <= end){
//             int mid = st + (end - st)/2;

//             if(nums[mid]==target){
//                 last = mid;
//                 st = mid +1;

//             }
//             else if(nums[mid] < target){
//                 st = mid +1;
//             }
//             else{
//                 end = mid -1;
//             }

//         }
//         return last;

        
//     }

    


//     vector<int> searchRange(vector<int>& nums, int target) {

//         int firsti = first(nums,target);
//         if(firsti == -1){
//             return {-1,-1};

//         }
//         int lasti = last(nums,target);

//         return {firsti,lasti};
        
//     } 


//     int main(){
//       vector<int> arr = {5,7,7,8,8,11};
//       int target = 8;
//       vector<int> result = searchRange(arr, target);
//       cout << "[" << result[0] << ", " << result[1] << "]" << endl;
//       return 0;
//     }