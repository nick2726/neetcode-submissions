class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int count:nums){
            freq[count]++;
        }
        for(auto& it:freq)
            if(it.second>=k)
        return it.first;
        
    }
};
