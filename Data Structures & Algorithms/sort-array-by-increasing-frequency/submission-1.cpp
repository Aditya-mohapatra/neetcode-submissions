#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
        // Step 1: Count occurrences of each number
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Sort using a custom comparator lambda
        std::sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (count[a] != count[b]) {
                return count[a] < count[b]; // Ascending order of frequency
            }
            return a > b; // Descending order of value if frequencies match
        });

        return nums;
    }
};
