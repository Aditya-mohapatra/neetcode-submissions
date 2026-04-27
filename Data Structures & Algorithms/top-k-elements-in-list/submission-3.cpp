class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> solution;

        unordered_map<int, pair<int,int>> freq;

        // store index + frequency
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]].first = i;
            freq[nums[i]].second++;
        }

        // max heap (frequency, number)
        priority_queue<pair<int,int>> maxer;

        for(auto &it : freq){
            maxer.push({it.second.second, it.first});
        }

        // get top k
        while(k--){
            solution.push_back(maxer.top().second);
            maxer.pop();
        }

        return solution;
    }
};