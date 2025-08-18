#include<iostream>
#include<vector>
using namespace std ;

bool search(vector<vector<int>>& matrix, int target,int row){
        int st = 0;

        int n = matrix[0].size();
        int end = n-1;
        while(st<=end){
            int mid = st + (end -st)/2;
            if(target == matrix[row][mid]){
                return true;
            }
            else if(target > matrix[row][mid]){
                st = mid +1;
            }
            else{
                end = mid-1;          }
        }

        return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st = 0;
        int end = m-1;
        while(st <= end){
            int mid  = st +(end - st)/2;

            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
            //  found
            return search(matrix,target,mid);
            }

            else if(target < matrix[mid][0] ){
                end  = mid -1;
            }
            else if(target > matrix[mid][n-1] ){
                st  = mid  +1;
            }

        }
        return false;
        
    }

int main(){
  vector <vector<int>> mat ={{1,3,5},{6,8,9},{11,13,14}};
  int target = 15;
  if(searchMatrix(mat,target)){
    cout<<"Target Found Succesfully!";
  }
  else{
    cout <<"Target Not Found!!!";
  }
}