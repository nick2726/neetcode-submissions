class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if (n > m) return false;
        int s1Count[26] = {0};
        int windowCount[26] = {0};
        for (int i = 0; i < n; i++) {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }
        if (memcmp(s1Count, windowCount, sizeof(s1Count)) == 0) return true;
        for (int i = n; i < m; i++) {
            windowCount[s2[i] - 'a']++;        
            windowCount[s2[i - n] - 'a']--;    
            if (memcmp(s1Count, windowCount, sizeof(s1Count)) == 0)
             return true;
        }
        return false;
    }
};