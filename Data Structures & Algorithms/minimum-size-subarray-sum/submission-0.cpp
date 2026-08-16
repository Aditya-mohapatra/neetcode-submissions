class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=nums.size();

        int tempsize=size+1;

        int tempsum=0;

        int left=0;
        int right=0;

        if(size==0){
            return 0;
        }
         while (right < size) {

            tempsum += nums[right];
            right++;

            while (tempsum >= target) {
                tempsize = min(tempsize, right - left);

                tempsum -= nums[left];
                left++;
            }
        }

        if (tempsize == size + 1) {
            return 0;
        }
        return tempsize;

        
    }
};