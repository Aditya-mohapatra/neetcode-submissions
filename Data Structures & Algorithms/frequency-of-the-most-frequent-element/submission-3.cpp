class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int size=nums.size();
        sort(nums.begin(),nums.end());

        int first=size-1;
        int last=size-1;
        int maxf=0;
        int m=0;

        if(size==0){
            return 0;
        }
        if(size==1){
            return 1;
        }

        while(last>0){
            last--;
            m=m+nums[first]-nums[last];
            if(m<=k){
                maxf=max(maxf, first-last+1);
            }else{
                first--;
                last=first;
                m=0;
            };

        };
        if(maxf==0){
            return 1;
        }else{
            return maxf;
        };

        
    }
};