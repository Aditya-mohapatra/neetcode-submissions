class Solution {
   public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        int first = 0;
        int last = 0;
        int max_length = 0;
        int maxf = 0;
        unordered_map<char, int> kmap;

        if (size == 0) {
            return 0;
        };
        if (size == 1) {
            return 1;
        };

        while (last < size) {
            kmap[s[last]]++;
            maxf = max(maxf, kmap[s[last]]);
            while (last - first + 1 - maxf > k) {
                kmap[s[first]]--;
                first++;
            }
            max_length = max(max_length, last - first + 1);
            last++;
        };
        return max_length;
    }
};