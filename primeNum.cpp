#include<iostream>
#include<vector>
using namespace std;

// ---------------------sieve of eratothenes approach-------------------


// int countPrimes(int n) {

//         vector <bool> isPrime(n+1,true);

//         int count = 0;
//         isPrime[0] = isPrime[1] = false;

//         for(int i = 2; i<n;i++){
//             if(isPrime[i]){
//                 count++;
//                 for(int j = i*2;j<n;j=j+i){
//                     isPrime[j] = false;
//                 }
//             }
//         }
//         return count;

        
        
//     }
bool Primes(int n){
  if(n <= 1){
    return false;
  }
  for(int i = 2; i*i <= n; i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}


int main(){
  int range = 50;
  // cout<<"the count of prime no's is :"<<countPrimes(range);
  if(Primes(range)){
    cout<<"the number is prime";

  }
  else{
    cout<<"the number is not prime";
  }
  
}