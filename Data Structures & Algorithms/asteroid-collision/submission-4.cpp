class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int size = asteroids.size();

        vector<int> st;

        if (size == 0)
            return st;

        int i = 0;

        while (i < size) {

            if (st.empty()) {
                st.push_back(asteroids[i]);
                i++;
            }
            else if (asteroids[i] >= 0 || st.back() < 0) {
                st.push_back(asteroids[i]);
                i++;
            }
            else {
                if (-asteroids[i] > st.back()) {
                    st.pop_back();
                    // Don't increment i.
                    // Current asteroid must fight the new top.
                }
                else if (-asteroids[i] < st.back()) {
                    i++;
                }
                else {
                    st.pop_back();
                    i++;
                }
            }
        }

        return st;
    }
};