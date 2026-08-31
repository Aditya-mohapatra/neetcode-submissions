class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();

        int i=0;
        int j=1;
        int k=1;

        if(size<2){
            return k;
        };

        while(j<size){
            if(nums[i]==nums[j]){
                j++;              
            }else{
                i++;
                nums[i]=nums[j];
                j++;
                k++;
            }
        };
        return k;
        
    }
};