class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0;
        int right = heights.size() - 1;
        int maxi = 0;

        while (left < right) {

            int vol = min(heights[left], heights[right]) * (right - left);
            maxi = max(maxi, vol);

            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;  
            }
        }

        return maxi;
    }
};
