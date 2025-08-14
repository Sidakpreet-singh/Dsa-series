#include <iostream>
using namespace std;

int rev(int n){
  int reverse = 0;
  
  while(  n != 0){
    int rem = n % 10;
    reverse = reverse*10 +rem;
    n = n /10;

  }
  return reverse;

}


int main(){
  int n = 1482;
  cout << "the reversed number is :"<<rev(n);
  return 0;
}
