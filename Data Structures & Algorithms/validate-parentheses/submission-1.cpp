class Solution {
public:
    bool isValid(string s) {
        int a;
        stack<char> parent;
        for(a=0;a<s.size();a++){
        if (s[a]=='{' || s[a]=='(' || s[a]=='['){
            parent.push(s[a]);
        };
         if (parent.empty()){
                return false;
            }else{
        if (s[a]==']'){
            if(parent.top()=='['){
                parent.pop();
                continue;
            }else{return false;}};
            if (s[a]=='}'){
            if(parent.top()=='{'){
                parent.pop();
                continue;
            }else{return false;}};
            if (s[a]==')'){
            if(parent.top()=='('){
                parent.pop();
                continue;
            }else{return false;}};
            }
        };
        if (parent.empty()){
            return true;
        }return false;
        };
        
    };
