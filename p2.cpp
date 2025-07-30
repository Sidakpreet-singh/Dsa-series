#include <iostream>
using namespace std;

// int sumD(int num){
//   int rem;
//   int sum = 0;
//   while(num >0){
//     rem = num % 10;
//     sum = sum + rem;

//     num = num / 10;

    
//   }
//   return sum;
// }

// int main(){
//   int num ;
//   cout << "enter the num for its sum:";
//   cin>> num;
//   cout << "the sum is :" << sumD(num);
// }

// int prime(int num){

//   bool isprime = true;
  
//   for(int i =2 ; i<=num-1;i++){
    
//     if(num % i == 0){
//       isprime = false;
//       break;
      
//       }
//       else{
//         isprime = true;
//       }

    
//   }

//   if(isprime==true){
//     cout<<"the number is prime";
//   }
//   else if(isprime == false){
//     cout<<"the number is not prime";
//   }

// }   

// int main(){
//   int num;
//   cout<<"enter the number u want to check:";
//   cin >> num;
//   prime(num);

// }



// ============================error================================== 


// int prime(int num){

//   bool isprime = true;
  
//   for(int i =2 ; i<= num-1;i++){
    
//     if(num % i == 0){
//       return false;
      
      
//       }
//       else{
//         return true;
//       }

    
//   }

  
  

  
  
//  return true;

// }   

// int main(){
//   int num;
//   cout<<"enter the number u want to check:";
//   cin >> num;

//   cout << "1" << endl;
//   cout << "2" << endl;
//   for(int i = 3; i<=num;i++){
//     prime(i);

//     if(prime(i)){
//       cout << i <<endl;
//     }
//   }

// }