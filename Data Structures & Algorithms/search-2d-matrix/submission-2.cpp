class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size=matrix.size();
        int i=0;
        int j=size-1;
        int ans=-1;
        int k;

        
        while(i<=j){
            k=i+((j-i)/2);
            if (matrix[k][0]<=target){
                ans=k;
                i=k+1;
            }else{
                j=k-1;
            }
        }if (ans == -1)
    return false;
        i=0;
        int size1=matrix[ans].size();
        j=size1-1;

        while(i<=j){
            k=i+((j-i)/2);
            
            if(matrix[ans][k]==target){
                return true;
            }
            if(matrix[ans][k]>target){
                j=k-1;
            }else{
                i=k+1;
            }

        }return false;
        
    }
};
