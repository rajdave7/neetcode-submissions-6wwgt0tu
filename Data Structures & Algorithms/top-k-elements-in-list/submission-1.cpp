class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int x : nums){
            m[x]++;
        }
        vector<vector<int>> v(nums.size()+1);

        for(auto& entry : m){
            v[entry.second].push_back(entry.first);
        }

        vector<int> res;
        for(int i=v.size()-1; i>0; i--){
            for(int n : v[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
