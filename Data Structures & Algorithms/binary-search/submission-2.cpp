class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size= nums.size();
        int i=0;
        int j=size-1;
        while(i<=j){
            int k=i+((j-i)/2);
            if(nums[k]==target){
                return k;
            }
            if(nums[k]<target){
                i=k+1;
            }
            else{
                j=k-1;            
            }
        }return -1;
        
    }
};
