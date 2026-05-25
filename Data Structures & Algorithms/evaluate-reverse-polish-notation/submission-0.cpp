class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> calc;

        for(int i = 0; i < tokens.size(); i++) {

            // Addition
            if(tokens[i] == "+") {

                int b = calc.top();
                calc.pop();

                int a = calc.top();
                calc.pop();

                int ans = a + b;

                calc.push(ans);
            }

            // Subtraction
            else if(tokens[i] == "-") {

                int b = calc.top();
                calc.pop();

                int a = calc.top();
                calc.pop();

                int ans = a - b;

                calc.push(ans);
            }

            // Multiplication
            else if(tokens[i] == "*") {

                int b = calc.top();
                calc.pop();

                int a = calc.top();
                calc.pop();

                int ans = a * b;

                calc.push(ans);
            }

            // Division
            else if(tokens[i] == "/") {

                int b = calc.top();
                calc.pop();

                int a = calc.top();
                calc.pop();

                int ans = a / b;

                calc.push(ans);
            }

            // Number
            else {

                calc.push(stoi(tokens[i]));
            }
        }

        return calc.top();
    }
};