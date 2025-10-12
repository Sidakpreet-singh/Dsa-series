#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int container(vector <int> &arr){
    int n = arr.size();
    int lb =0; 
    int rb = n-1;
    int vol = 0;
    while(lb < rb){
        int ht = min(arr[lb],arr[rb]);
        int wt = rb -lb ;
        int area = ht * wt;
        vol=max(vol,area);

        if(arr[lb]<arr[rb]){
            lb++;
        }
        else{
            rb--;
        }

    }
    return vol;
}

int main(){

    vector <int> arr ={1,8,6,2,5,4,8,3,7};
    cout<<container(arr)<<endl;


}