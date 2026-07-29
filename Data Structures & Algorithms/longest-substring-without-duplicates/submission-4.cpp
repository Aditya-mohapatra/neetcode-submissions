class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> unique;
        int size=s.length();
        int first=0;
        int last=0;
        int ans=0;
        ans = (size == 0) ? 0 : 1;

        while(last<size-1){
             last++;
            for(int i=first;i<last;i++){
                if(s[i]==s[last]){
                    first = max(first, i + 1);
                    break;
                }
            };
            if(last-first+1>ans){
            ans=last-first+1;
        };      

        };
        
        return ans;


        
    }
};
