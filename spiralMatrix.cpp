#include<iostream>
#include<vector>
using  namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector <int> ans;

        int scol = 0;
        int ecol = n - 1;
        int srow = 0;
        int erow = m-1;

        while(srow <= erow && scol <= ecol){
            for(int i = scol ;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
                // top

            }
            for(int j = srow+1;j<=erow;j++){
                ans.push_back(matrix[j][ecol]);
                // right
            }
            for(int k = ecol -1;k>= scol;k--){
                if(srow ==erow){
                    break;
                }
                ans.push_back(matrix[erow][k]);
                // bottom
            }
            for(int h = erow -1;h>srow;h--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[h][scol]);
                // left
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;

        
    }

int main(){
  vector <vector<int>> mat ={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
  vector <int> ans = spiralOrder(mat);
  for(int val : ans){
    cout << val << " ";
  }
}