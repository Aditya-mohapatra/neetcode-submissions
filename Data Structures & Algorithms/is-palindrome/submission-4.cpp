class Solution {
public:
    bool isPalindrome(string s) {
        int size=s.size();
        int right=size-1;
        int  left=0;

        int i=0;

        while(i<size){
            if(s[i]<='Z' && s[i]>='A'){
                s[i]=s[i]-'A'+'a';
                i++;
            }else{
                i++;
            }
        };

        if(size==0 || size==1){
            return true;
        };

        while(right>left){
            if(s[right]==s[left]){
                left++;
                right--;
            }else if((s[right]>'z' || s[right]<'a') && (s[right]<'0' || s[right]>'9')){
                right--;
            }else if((s[left]>'z' || s[left]<'a') && (s[left]<'0' || s[left]>'9')){
                left++;
            }else{
                return false;
            }                            
        }return true;
        
    }
};
