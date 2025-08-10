#include <iostream>
#include <vector>
#include <climits>


using namespace std;

 int minDays(vector<int>& bloomDay, int m, int k) {
        int n  = bloomDay.size();
        int st = INT_MAX;
        int end = 0;
        
        int ans = -1;

        if((long)m * k > n){
            return -1;
        }
        for(int i = 0; i< n;i++){
            st = min(st,bloomDay[i]);
            end = max(end,bloomDay[i]);
        }

        while(st<=end)
        {
            int mid = st +(end -st)/2;
            int flower = 0;
        int bouq = 0;

            for(int j = 0 ;j<n;j++){
                if(bloomDay[j]<= mid){
                   flower++;

                   if(flower == k){
                    bouq++;
                    flower =0;
                }
                }

                else{
                    flower = 0;
                }


                
            }

            if(bouq>= m){

                ans = mid;
                end = mid -1;

            }

            else{
                st = mid + 1;
            }





        }

        return ans;

        
    }


int main(){
  vector <int> arr ={7,6,7,7,12,11,12,7,7};
  int m = 2;
  int k = 3;
  cout<<"the min days :"<<minDays(arr,m,k);
}