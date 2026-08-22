class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int size = arr.size();

        vector<int> difference(size);
        vector<int> solution;

        for (int i = 0; i < size; i++) {
            difference[i] = abs(x - arr[i]);
        }

        int left = 0;
        int right = k - 1;

        int current_low = 0;

        for (int i = 0; i < k; i++) {
            current_low += difference[i];
        }

        int global_low = current_low;
        int index = 0;

        while (right < size - 1) {
            current_low -= difference[left];
            left++;

            right++;
            current_low += difference[right];

            if (current_low < global_low) {
                global_low = current_low;
                index = left;
            }
        }

        for (int i = index; i < index + k; i++) {
            solution.push_back(arr[i]);
        }

        return solution;
    }
};