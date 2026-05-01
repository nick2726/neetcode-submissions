class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> seen;
        int n=s.size();
        int l=0,maxLen=0;
        for(int r=0;r<n;r++){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxLen=max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
