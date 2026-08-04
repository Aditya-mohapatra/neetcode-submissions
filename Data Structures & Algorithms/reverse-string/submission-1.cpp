class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        int first=0;
        int last=size-1;

        while(first<size/2){
            char temp=s[first];
            s[first]=s[last];
            s[last]=temp;

            first++;
            last--;

        } 

        
    }
};