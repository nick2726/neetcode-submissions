class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        
        for(int x : nums){        // ← MISSING in your code!
            mpp[x]++;
        }
        
        vector<vector<int>> bucket(n + 1);
        for(auto it : mpp){
            bucket[it.second].push_back(it.first);
        }

        vector<int> result;
        for(int i = n; i >= 1; i--){
            for(int x : bucket[i]){
                result.push_back(x);
                if(result.size() == k) return result;
            }
        }
        return result;
    }
};