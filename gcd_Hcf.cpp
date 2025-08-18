#include <iostream>
using namespace std;

// int gcd(int a,int b){
//   while(a>0 && b> 0){
//     if(a>b){
//        a = a % b;
//     }
//     else{
//       b = b % a;
//     }

//   }

//   if(a == 0){
//     return b;
//   }
//   if(b == 0){
//     return a;
//   }
// }


// --------------recursion-----------------
// eculid's algo-----------

int gcdr(int a,int b){
  if(b ==0) return a;

  return gcdr(b,a % b);
}

int lcm(int a,int b){
  int gcd = gcdr(a,b);
  return a*b / gcd;
}


int main(){
  int a =20;
  int b = 28;
  cout<<lcm(a,b);
}