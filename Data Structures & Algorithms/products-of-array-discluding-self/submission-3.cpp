class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int total=1;
        int zeroCount=0;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=0){
                
                prod = prod*nums[i];
            }
            else{
                zeroCount++;
            }
        }

        if(zeroCount>1){
            return vector<int>(nums.size(),0);
        }
        for(int i=0;i<nums.size();i++){
            if(zeroCount>0){
                res[i]= (nums[i]==0) ? prod : 0;
            }
            else{
                res[i] = prod/nums[i];
            }
        }

        return res;
        
    }
};
