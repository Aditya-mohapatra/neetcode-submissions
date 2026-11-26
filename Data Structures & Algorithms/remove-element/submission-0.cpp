class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int i = 0, j = size - 1;

        while (i <= j) {
            if (nums[i] == val) {
                if (nums[j] != val) {
                    swap(nums[i], nums[j]);
                    j--;
                } else {
                    j--;
                }
            } else {
                i++;
            }
        }

        return i;
    }
};