class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> finder;
        int difference;
        int first;
        
        for(int i=0;i<nums.size();i++){
            finder[nums[i]];
        }

        for(int j=0;j<nums.size();j++){
            difference=target-nums[j];
            if (finder.find(difference)!=finder.end()){
                for(int second=0;second<nums.size();second++){
            if(difference==nums[second] && j!=second){
                return {j,second};
                }
            }
                            
        }        
                        
    }return {};
    }
};
