#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for (int x : nums) {
            cnt[x]++;
        }
        int mx = 0;
        for (auto &p : cnt) {
            if (p.second > mx) {
                mx = p.second;
            }
        }
        int total = 0;
        for (auto &p : cnt) {
            if (p.second == mx) {
                total += p.second;
            }
        }
        return total;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 2, 2, 3, 1, 4};

    int result = sol.maxFrequencyElements(nums);

    cout << "Result: " << result << endl;

    return 0;
}
