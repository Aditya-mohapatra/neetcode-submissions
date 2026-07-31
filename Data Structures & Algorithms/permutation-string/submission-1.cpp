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
        
        //freqeuncy for s1
        for (int i = 0; i < size1; i++) {
            map1[s1[i] - 'a']++;
        };

        //frequency for s2
        for (int i = 0; i < size1; i++) {
            map2[s2[i] - 'a']++;
        };        

        //checker for equality
        while(last < size2-1 && map1!=map2){
                map2[s2[first]-'a']--;
                first++;
                last++;
                map2[s2[last]-'a']++;                
             };
             return map1==map2;
        
    };
};