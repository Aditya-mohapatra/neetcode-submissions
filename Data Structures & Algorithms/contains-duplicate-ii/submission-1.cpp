class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();

        if (k == 0) return false;

        unordered_map<int, int> kmap;

        int left = 0;

        for (int right = 0; right < size; right++) {

            kmap[nums[right]]++;

            if (kmap[nums[right]] > 1)
                return true;

            if (right - left == k) {
                kmap[nums[left]]--;

                if (kmap[nums[left]] == 0)
                    kmap.erase(nums[left]);

                left++;
            }
        }

        return false;
    }
};