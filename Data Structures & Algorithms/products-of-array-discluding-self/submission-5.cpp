#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int product = 1;
    
    int i;
    int k=0;

    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prod(size);
        // net product
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                k++;
            } else {
                product = product * nums[i];
            }
        }

        // divider
        if(k!=size){
        for (int i = 0; i < size; i++) {
            if(k==0){
            prod[i] = (product / nums[i]);
            }
            if(k==1){
            if (nums[i] == 0){  
            prod[i] = product;           
            }else{
            prod[i]=0;
            }
            }
            if (k!=0 && k!=1){
                prod[i]=0;
            }
        }
        return prod;
        }

        if(k==size){
        for (int i = 0; i < size; i++){
            prod[i]=0;
        }return prod;

        }
    }
};
