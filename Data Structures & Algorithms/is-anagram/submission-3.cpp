class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> frequency;
        if (s.size() != t.size() || s.size() == 0) {
            return false;
        }
        for(int i=0;i<s.size();i++){
            frequency[s[i]]++;
            frequency[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(frequency[s[i]]==0){
                continue;
            }
            else{return false;}                
    }return true;
}
};
