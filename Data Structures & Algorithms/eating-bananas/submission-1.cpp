class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int size=piles.size();
        int k;
        int ans=0;
        int answer=0;

        sort(piles.begin(),piles.end());

        int low=1;
        int high=piles[size-1];

        while(low<=high){
                k=low+((high-low)/2);
                ans=0;
            for(int i=0;i<size;i++){
                double t=piles[i];
                double s=k;
                ans=ans+ceil(t/s);
            }
            if(ans>h){
                  low=k+1;  
            }if(ans<=h){
                    answer=k;
                    high=k-1;
                }
            }
            return answer;
        }
        
};
