class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size=arr.size();
        int maxE=-1;
        int i=size-1;

        vector<int> sol(size);
        sol[i]=maxE;

        while(i>0){
            i--;
            maxE=max(maxE,arr[i+1]);
            sol[i]=maxE;
        
    }return sol;
    }
};