class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> seen;
        int n=s.size();
        int l=0,maxLen=0;
        while(r<n){
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
