#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        std::vector<int> ans;
        
        // Pre-allocate memory for 2n elements to avoid multiple reallocations
        ans.reserve(nums.size() * 2);
        
        // Copy the original array into ans the first time
        ans.insert(ans.end(), nums.begin(), nums.end());
        
        // Copy the original array into ans the second time
        ans.insert(ans.end(), nums.begin(), nums.end());
        
        return ans;
    }
};
