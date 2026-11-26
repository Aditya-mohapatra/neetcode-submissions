class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int i=0;
        int cand=nums[0];
        int vote=0;
        while(i<size){
            if(nums[i]==cand){
                    vote++;
                }else{
                    vote--;
                };
            if(vote<0){
                vote=0;
                cand=nums[i];                
            }else{
                i++;
            }
        }
        return cand;
        
    }
};