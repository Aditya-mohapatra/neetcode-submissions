class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();

        int i = 0;

        array<int, 3> counter{};

        while (i < size) {
            counter[nums[i]]++;
            i++;
        };

        int index=0;

        for (int j = 0; j < counter[0]; j++) {
            nums[index++] = 0;
        };

        for (int j = 0; j < counter[1]; j++) {
            nums[index++] = 1;
        };

        for (int j = 0; j < counter[2]; j++) {
            nums[index++] = 2;
        };
    }
};