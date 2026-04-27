class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> finder;

        for(int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];

            if(finder.find(difference) != finder.end()){
                return { finder[difference], i };
            }

            finder[nums[i]] = i;
        }
        return {};
    }
};

