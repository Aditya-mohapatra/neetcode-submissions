class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();

        if (size1 == 0) return true;
        if (size1 > size2) return false;

        int first = 0;
        int last = size1 - 1;


        array<int, 26> map1{};
        array<int, 26> map2{};

        for (int i = 0; i < size1; i++) {
            map1[s1[i] - 'a']++;
        }

        while (last < size2) {

            map2.fill(0);

            for (int i = first; i <= last; i++) {
                map2[s2[i] - 'a']++;
            }

            if (map1 == map2) {
                return true;
            }

            first++;
            last++;
        }

        return false;
    }
};