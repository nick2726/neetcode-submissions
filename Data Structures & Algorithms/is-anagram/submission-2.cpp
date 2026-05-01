class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        unordered_map<char,int> freq1;
        for(int i=0;i<m;i++){
            freq1[s[i]]++;
        }
        unordered_map<char,int> freq2;
        for(int i=0;i<n;i++){
            freq2[t[i]]++;
        }
        if(freq1==freq2)
        return true; 
        else
    return false;
    }
};
