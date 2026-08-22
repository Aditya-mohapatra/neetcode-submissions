class Solution {
public:
    int calPoints(vector<string>& operations) {
        int size=operations.size();
        vector<int> sol{};

        int i=0;
        while(i<size){
            if(operations[i]=="D"){
                int val=2*sol.back();
                sol.push_back(val);
            }else if(operations[i]=="C"){
                sol.pop_back();
            }else if(operations[i]=="+"){
            int sum = sol.back() + sol[sol.size() - 2];
                sol.push_back(sum);
                sum=0;
            }else{
                sol.push_back(stoi(operations[i]));
            };
            i++;
        }
        int solution=0;
        while(!sol.empty()){
            solution+=sol.back();
            sol.pop_back();
        };
        return solution;
        
    }
};