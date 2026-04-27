class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        if (nums.size()==0 || nums.size()==1){
            return false;
        } 
        while(i<nums.size()-1){
            int* left= &nums[i];
            int *right=&nums[i+1];
            if(*left==*right){
                return true;
            }
            else{
                i++;
            }
        }
        return false;

        }


        
    };