class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> kmap; 

        vector<int> sol{};

        int size=nums.size();

        int i=0;

        while(i<size){
            kmap[nums[i]]++;
            i++;
        };

        i=0;

        int j=size/3;

        while(i<size){
            if(kmap[nums[i]]>j){
                kmap[nums[i]]=0;
                sol.push_back(nums[i]);
                i++;

            }else{
                i++;
            }
            

        };

        return sol;

    }
};