class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp(n);
        for (const auto& it : nums) {
            mpp[it]++;
            if (mpp[it] > 1) {
                return true;
            }
        }
        return false;
    }
};