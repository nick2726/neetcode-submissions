class Solution {
   public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int s2 = t.size();
        if (s1 != s2) {
            return false;
        }
        unordered_map<char, int> mpp1;
        for (const auto& it : s) {
            mpp1[it]++;
        }
        unordered_map<char, int> mpp2;
        for (const auto& it : t) {
            mpp2[it]++;
        }
        if (mpp1 == mpp2) {
            return true;
        }
        return false;
    }
};
