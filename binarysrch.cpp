// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> arr, int n, int tar)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
  int mid = start + (end - start) / 2;
    if (arr[mid] < tar)
    {
      start = mid + 1;
    }
    else if (arr[mid] > tar)
      end = mid - 1;

    else
    {
      return mid;
    }
  }

  return -1;
}

int main()
{
  vector<int> arr = {-2, 4, 5, 8, 11};
  int n = arr.size();
  int tar = -2;

  cout << binary(arr, n, tar) << endl;

  return 0;
}