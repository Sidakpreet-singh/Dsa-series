#include<bits/stdc++.h>

using namespace std;

bool search(int mat[][4],int rows,int cols,int key){

    for(int i =0;i<rows;i++){
        for(int j = 0; j<cols;j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
pair<int,int> res(int mat[][4],int rows,int cols,int key){

    for(int i =0;i<rows;i++){
        for(int j = 0; j<cols;j++){
            if(mat[i][j] == key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int rsum(int mat[][4],int rows,int cols){
    
    int ans = INT_MIN;
    for(int i =0; i< rows;i++){
        int sum = 0;
        for(int j =0;j<cols;j++){

            sum+=mat[i][j];
        }
        ans = max(sum,ans);
    }
    return ans;
}
int csum(int mat[][4],int rows,int cols){
    
    int ans = INT_MIN;
    for(int i =0; i< rows;i++){
        int sum = 0;
        for(int j =0;j<cols;j++){

            sum+=mat[j][i];
        }
        ans = max(sum,ans);
    }
    return ans;
}

int dsum(int mat[][4],int rows,int cols){
    int pd = 0;
    int tsum =0;

    for(int i =0;i<rows;i++){
        pd+=mat[i][i];
    }

    int sd =0;
    for(int j =0;j<rows;j++){
        sd+=mat[j][rows-j-1];
    }

    if(rows%2 ==0){
        tsum = pd+sd;
    }
    else{
        tsum = pd +sd - mat[rows/2][rows/2];
    }
    return tsum;
}







int main(){
    int mat[4][4] ={{2,3,5,92},{4,6,7,23},{8,1,9,78},{23,12,32,31}};
  int rows = 4;
  int cols = 4;
  int key =7;

  pair <int,int> ans = res(mat,rows,cols,key);

  if(search(mat,rows,cols,key)){
    cout<<"target locked!"<<endl;
    cout<<"{"<<ans.first<<","<<ans.second<<"}"<<endl;
  }
  else{
    cout<<"NOt Found";
  }
  int rowsum = rsum(mat,rows,cols);
  cout<<"the max row sum ->"<<rowsum<<endl;
  int colsum = csum(mat,rows,cols);
  cout<<"the max column sum ->"<<colsum<<endl;
  int diasum = dsum(mat,rows,cols);
  cout<<"the diagonal sum ->"<<diasum<<endl;
}
