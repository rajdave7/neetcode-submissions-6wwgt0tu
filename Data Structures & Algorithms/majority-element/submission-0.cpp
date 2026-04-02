class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
        unordered_map<int,int>m;
        for(int x : nums){
            m[x]++;
        }
        for(auto x : m){
            if (x.second>target){
                return x.first;
            }
        }
        return 0;
    }

};