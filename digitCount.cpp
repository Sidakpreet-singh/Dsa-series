#include <iostream>

using namespace std;

// int digitCount(int n){
//   int count = 0;
//   int rem;
//   while(n !=0){
//     rem=n % 10;
//     count++;
//     n = n/10;

//   }

//   return count;
// }



// -----------------------ARMSTRONG NUMBER-------------

bool isArmstrong(int n){
  int copy = n;

  int dg;
  int sum=0;
  while(n != 0){
    dg = n % 10;
    sum = sum + (dg * dg * dg);
    n = n /10;
    

  }
  if(sum == copy){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int n = 153;
  // cout<<"the count of digits: "<<digitCount(n);
  if(isArmstrong(n)){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
  return 0;
}