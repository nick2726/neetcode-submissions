class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m){
            return false;
        }
        vector<int> s1Count(26, 0);
        vector<int> s2Count(26, 0);
        for (int i = 0; i <n; i++) {
            s1Count[s1[i] - 'a']++;
            s2Count[s2[i] - 'a']++;
        }
        if (memcmp(s1Count, s2Count, sizeof(s1Count)) == 0) 
        return true;
             for (int i = n; i < m; i++) {
            windowCount[s2[i] - 'a']++;     
            windowCount[s2[i - n] - 'a']--;



         if (memcmp(s1Count, windowCount, sizeof(s1Count)) == 0) return true;
        }
        return false;

        
    }
};
