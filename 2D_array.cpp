#include <iostream>
#include <utility>
#include<climits>
#include <vector>

using namespace std;

bool Search(int mat[][4],int rows,int cols,int key){
  for(int i =0;i<rows;i++){
    for(int j =0; j< cols; j++){
      if(mat[i][j] == key){
        return true;
      }
    }
  }
  return false;
}

pair <int,int> ans(int mat[][4],int rows,int cols,int key){
  for(int i =0;i<rows;i++){
    for(int j =0; j< cols; j++){
      if(mat[i][j] == key){
        return {i, j};
      }
    }
  }
  return {-1, -1}; // not found
}


int rsum(int mat[][4],int rows,int cols){
  int maxsum = INT_MIN;
  
  for(int i =0; i<rows;i++){
    int rowsum =0;
    for(int j =0; j<cols;j++){
      rowsum += mat[i][j];


    }
    maxsum = max(maxsum,rowsum);
  }
  return maxsum;
}


int csum(int mat[][4],int rows,int cols){
  int maxsum = INT_MIN;
  
  for(int i =0; i<rows;i++){
    int colsum =0;
    for(int j =0; j<cols;j++){
      colsum += mat[j][i];


    }
    maxsum = max(maxsum,colsum);
  }
  return maxsum;
}

int Dsum(int mat[][4],int n){
  int totalsum =0;
  int pd =0;
  for(int i =0; i<n;i++){
   
      pd += mat[i][i];
    
  }


int sd = 0;
for(int i =0;i<n;i++){
  
    sd += mat[i][n-i-1];
  
}

if(n % 2 == 0){
  totalsum = pd +sd;

}
else{
  
  totalsum = pd +sd - mat[n/2][n/2];
}


return totalsum;

}



int main(){
  int mat[4][4] ={{2,3,5,92},{4,6,7,23},{8,1,9,78},{23,12,32,31}};
  int rows = 4;
  int cols = 4;
  int key =7;
  int n = 4;
  pair<int,int>res = ans(mat,rows,cols,key);
  cout<<"i :"<<res.first<<endl<<"j :"<<res.second;
  cout<<endl;

  if(Search(mat,rows,cols,key)){
    cout<<"found!";
  }
  else{
    cout<<"NOt Found!";
  }
  cout<<endl;

   cout<<"the max sum of row is :"<<rsum(mat,rows,cols);

   cout<<endl;

   cout<<"the max sum of column is :"<<csum(mat,rows,cols);
   cout<<endl;

   cout<<"the diagonal sum  is :"<<Dsum(mat,n);



  return 0;


}