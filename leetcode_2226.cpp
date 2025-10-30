#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool ispossible(vector<int>& candies, long long k, int n, long long mid) {
        long long child = 0;
        for (int i = 0; i < n; i++) {
            child += candies[i] / mid;
        }
        return child >= k;
    }

    int maximumCandies(vector<int>& arr, long long k) {
        int n = arr.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        if (sum < k) return 0;

        long long s = 1;
        long long end = sum / k;
        long long ans = 0;

        while (s <= end) {
            long long mid = s + (end - s) / 2;

            if (ispossible(arr, k, n, mid)) {
                ans = mid;
                s = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return (int)ans;
    }
};

int main() {
    Solution sol;

    // 🧪 Example input:
    vector<int> candies = {5, 8, 6};
    long long k = 3;

    cout << "Maximum candies each child can get: "
         << sol.maximumCandies(candies, k) << endl;

    return 0;
}
