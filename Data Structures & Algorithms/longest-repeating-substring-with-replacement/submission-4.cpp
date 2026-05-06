class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mpp;
        int maxLen = 0, maxFreq = 0, l = 0, r = 0;
        int n = s.size();
        for (r = 0; r < n; r++) {
            mpp[s[r]]++;
            maxFreq = max(maxFreq, mpp[s[r]]);
            while ((r - l + 1) - maxFreq > k) {
                mpp[s[l]]--;
                l++;
            }
            maxLen = max(maxLen, (r - l + 1));
        }
        return maxLen;
    }
};
