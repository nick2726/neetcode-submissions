class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int count:freq){
            freq[count]++;
        }
        for(auto & it: freq)
            if(it.second>1)
            return true;
            return false;
        
    }
};