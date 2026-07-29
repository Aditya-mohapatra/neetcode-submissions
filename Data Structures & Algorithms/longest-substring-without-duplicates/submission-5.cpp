class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int first = 0;
        int last = 0;
        int max_value = 0;

        unordered_map<char, int> kmap;
        if (size == 0) {
            return 0;
        };
        if (size == 1) {
            return 1;
        };

        while (last < size) {
            if (kmap.find(s[last]) != kmap.end()) {
                if(kmap[s[last]] < first){
                    kmap[s[last]]=last;
                }else{
                    first=kmap[s[last]]+1;
                    kmap[s[last]]=last;
                };
            }else{
                kmap[s[last]]=last;
            }
            if (last - first + 1 > max_value) {
                max_value = last - first + 1;
            };
            last++;
        }
        return max_value;
    }
};
