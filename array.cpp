// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
//   int marks[5]={10,8,5,78,5};
//   int size = 5;
// int small = INT_MAX;
// int index1;
//   for (int i =0 ;i<5;i++){

//     if(small > marks[i]){
//       small = marks[i];
//       index1=i;
//     }

//     // if(marks[i] < marks[i+1]){
//     //   int temp = marks[i];
//     //   marks[i] = marks[i+1];
//     //   marks[i+1] = temp;
//     // }
//  }
//     cout << "the smallest number :" << small <<endl;
//     cout << index1<<endl;

//   int large = INT_MIN;
//   int index;
//   for(int i=0;i<5;i++){
//     if(large<marks[i]){
//       large=marks[i];
//       index = i;
//     }
//   }
//   cout<<"the largest number is :" << large << endl;
//   cout << index<<endl;

// -----------------LINEAR SEARCH !!  ------------------------

//  int linear(int arr[],int size,int target){
//   for(int i =0;i<size;i++){
//     if(arr[i] == target){
//       return i;

//     }
//   }
//   return -1;
//  }

//  int main(){
//  int marks[5] = {12,34,4,5,3};
//  int size = 5;
//  int target = 78;

//  cout << linear(marks,size,target) << endl;

// return 0;

// }

// -------------------------REVERSE ARRAY !!!-------------------

// int main(){

// int marks[7] = {1,2,3,4,5,6,9};
// int size = 7;
// int start = 0;
// int end = size -1 ;
// while(start<end){
//   int temp = marks[start];
//   marks[start] = marks[end];
//   marks[end]=temp;
//   start++;
//   end--;

// }
// cout<<"the reversed arrray :"<< endl;

// for(int i =0;i<size;i++){

//   cout<<marks[i] << "\t";
// }

// }

// -------------------HOMEWORK!!---------------------

// SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY

// int main(){
//   int arr[6]={2,5,6,7,5,3};
//   int size = 6;
//   int sum =0;
//   int product = 1;

//   for(int i =0 ; i<size;i++){
//     sum = sum + arr[i];
//     product = product * arr[i];
//   }

//   cout << "the sum is :" << sum <<endl;
//   cout << "the product is :" << product <<endl;

// }

// SWAP THE MAX AND MIN NUMBER OF AN ARRAY

// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[6]={2,5,6,7,5,3};
//   int size = 6;
//   int small = INT_MAX;
//   int large = INT_MIN;
//   int sin;   // small value index
//   int lin;    // large value index

// for(int i= 0 ; i< size;i++){
//     if(small > arr[i]){
//       small = arr[i];
//       int sin = i;
//     }

//     if(large < arr[i]){
//       large = arr[i];
//       lin = i;
//     }
//   }
//    int temp = arr[sin];
//    arr[sin] = arr[lin];
//    arr[lin]=temp;

//    cout<<"max value :"<<large<<endl;
//    cout<<"min value"<<small<<endl;

//    cout <<"the swapped array :"<<endl;

//    for(int i =0 ; i< size ; i++){
//     cout<<arr[i]<<"\t";
//    }

// return 0;
// }

//

// INTERSECTION OF TWO ARRAYS

// #include <iostream>
// using namespace std;

// int main()
// {
//   int arr[5] = {2, 4, 5, 8, 77};
//   int arr2[5] = {2, 75, 3, 6, 7};
//   int size = 5;
//   int com;

//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 0; j < size; j++)
//     {
//       if (arr[i] == arr2[j])
//       {
//         com = arr[i];
//       }
//       break;
//     }
//   }

//   cout << "the intersection of two arrays :" << com << endl;
// }

// -----------------------THE END !---------------------------------------------------