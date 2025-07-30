#include <iostream>
using namespace std;

int main()
{

  // int sum =0 ;
  // for(int i=0;i<=10;i++){
  //   if(i % 2 != 0){
  //     sum = sum + i;

  //   }
  // }
  // cout << "sum is :" << sum;

  // int n, i;
  // bool isprime = true;

  // cout << "enter the number you want to check:";
  // cin >> n;
  // for (i = 2; i <= n - 1; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     isprime = false;
  //     break;
  //   }
  // }
  // if (isprime == true)
  // {
  //   cout << "prime number";
  // }
  // else
  // {
  //   cout << "non prime number";
  // }

  // int sum =0 ;
  // int n , i ;
  // cout << "enter the number you want to check:";
  // cin >> n;

  // for(i=1;i<=n;i++){
  //   if(i % 3 == 0){
  //     sum = sum +i;
  //   }
  // }
  // cout << "the sum is :" << sum;
  
//   int n = 5;
//   int num =1;


//  for(int i =1 ;i<=n;i++){
//   cout << endl;
//   for(int j =1;j<=n;j++){
//     cout << num;
//     num ++;
//   }
//  }

// int num = 1;
// for(int i =1 ;i<=5;i++){
//   for(int j=i;j>=1;j--){
    
//     cout << j ;
//     // num=num+1;
    
    
//   }
//   cout << endl;
// }

// floyd's triangle


// int num =1;
// for(int i=1;i <=4; i++){
//   for(int j =1;j<=i;j++){
//     cout << " " <<num;
//     num++;

//   }
//   cout << endl;

// }

// int num =1;

// for(int i =4;i>0;i--){
//   for(int j= 4;j>i;j--){
//     cout <<" ";
//   }
//   for(int k=i;k>0;k--){
//     cout<< num;

//   }
//   num++;
//   cout<<endl;
// }
// int n=5;

// for(int i =1 ; i<=n;i++){
//   for(int j = 1; j <= n -i;j++){
//     cout<< " ";
//   }

//   for(int k = 1 ;k<=i;k++){
//     cout<< k;
//   }

//   for (int x = i-1; x >0;x--){
//     cout<< x;
//   }
//   cout<<endl;

// }

// output  
//   1
//   121
//  12321
// 1234321
int n =7;
for(int i =0; i<n;i++){
  for(int j = 0 ; j < n - i-1;j++){
    cout << " ";
  }

  cout << "*" ;

if ( i != 0){
  for(int k = 0; k < 2*i -1 ; k++){
    cout<< " ";
  }
  cout<<"*";
  

}
cout << endl;
}

for(int i=0;i<n-1;i++){
  for(int j =0;j<i+1;j++){
    cout<<" ";
  }
  cout<<"*";
if (i != n-2){
  for(int k = 0 ; k < 2*(n-i)-5 ;k++){
    cout << " ";
  }
  cout << "*";
}

  cout<<endl;



  
}

//       *
//      * *
//     *   *
//    *     *
//   *       *
//  *         *
// *           *
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *



 




  return 0;
}