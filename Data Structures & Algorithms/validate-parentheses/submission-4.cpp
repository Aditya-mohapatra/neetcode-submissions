class Solution {
public:
    bool isValid(string s) {

        stack<char> parent;

        for(int a = 0; a < s.size(); a++) {

            // Opening brackets
            if(s[a] == '{' || s[a] == '(' || s[a] == '[') {
                parent.push(s[a]);
            }

            // Closing brackets
            else {

                // No opening bracket available
                if(parent.empty()) {
                    return false;
                }

                // Matching brackets
                if(s[a] == ']' && parent.top() == '[') {
                    parent.pop();
                }

                else if(s[a] == '}' && parent.top() == '{') {
                    parent.pop();
                }

                else if(s[a] == ')' && parent.top() == '(') {
                    parent.pop();
                }

                // Wrong match
                else {
                    return false;
                }
            }
        }

        return parent.empty();
    }
};