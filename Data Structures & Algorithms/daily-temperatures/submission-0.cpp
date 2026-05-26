class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> result;

        int s = temperatures.size();

        for(int i = 0; i < s; i++) {

            int count = 0;
            bool found = false;

            for(int j = i + 1; j < s; j++) {

                count++;

                if(temperatures[j] > temperatures[i]) {

                    result.push_back(count);
                    found = true;
                    break;
                }
            }

            if(!found) {
                result.push_back(0);
            }
        }

        return result;
    }
};