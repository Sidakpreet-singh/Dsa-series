 #include <iostream>
 using namespace std;
 
 int mySqrt(int x) {

    long long st = 1;
    long long end = x;
    long long ans = 0;
    while(st<=end){
        long long mid = st + (end-st)/2;
        if(mid * mid <= x){
            st = mid +1;
            ans = mid;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
        
    }

    int main(){
      int x = 29;
      cout << "THE SQRT OF -> "<<x<<" IS : "<<mySqrt(x);
    }