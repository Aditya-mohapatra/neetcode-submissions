class Solution {
public:
    int findMin(vector<int> &nums) {

    int ans;

    int size=nums.size();
    int low=0;
    int high=size-1;
    int mid;

    if(nums[low]<=nums[high]){
        ans=nums[low];
    }else{
        ans=nums[high];
    }
    
    while(low<=high){
        mid=low+((high-low)/2);
        if(nums[mid]>ans){
            low=mid+1;
        }
        if(nums[mid]<=ans){
            ans=nums[mid];
            high=mid-1;
        }
    }return ans;
    }
};