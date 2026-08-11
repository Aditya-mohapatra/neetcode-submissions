class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizes=s.size();
        int sizet=t.size();

        if(sizes>sizet){
            return false;
        };

        int main=0;
        int sub=0;

        while(sub<sizes && main<sizet){
            if(s[sub]==t[main]){
                main++;
                sub++;
            }else{
                main++;
            }
            
        }
        if(sub==sizes){
            return true;
        }else{
            return false;
        };



    }
};