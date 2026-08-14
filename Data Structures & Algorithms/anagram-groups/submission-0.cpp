class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();

        vector<vector<string>> sol{};

        unordered_map<string, vector<string>> kmap;

        for (int i = 0; i < size; i++) {
            string key = strs[i];
            sort(key.begin(), key.end());

            kmap[key].push_back(strs[i]);
        }

        for (auto& pair : kmap) {
            sol.push_back(pair.second);
        }

        return sol;
    }
};