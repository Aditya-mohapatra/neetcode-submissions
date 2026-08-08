class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();

        int left=0;
        int right=0;
        int maxlen=0;

        while(right<size){
            if(nums[right]==1){
                maxlen=max(maxlen,(right-left+1));
                right++;
            }else{
                right++;
                left=right;
            }
        }return maxlen;

        
    }
};